# -*- coding: utf-8 -*-
"""
Created on Thu Feb 21 16:06:25 2019

@author: twebb
"""

import numpy as np
import matplotlib.pyplot as plt

import torch
import torchvision
import torchvision.transforms as transforms

def read_pkl(filepath):
    import pickle
    pkl_file = open(filepath, 'rb')
    temp = pickle.load(pkl_file)
    pkl_file.close()
    return temp

X_train = read_pkl(filepath = 'data/x_train_mnist.pkl')
X_test = read_pkl(filepath = 'data/x_test_mnist.pkl')
Y_train = read_pkl(filepath = 'data/y_train_mnist.pkl')
Y_test = read_pkl(filepath = 'data/y_test_mnist.pkl')


print(np.shape(X_train))
print(np.shape(X_test))
print(np.shape(Y_train))
print(np.shape(Y_test))

im_index=0
print(Y_train[im_index])
plt.imshow(X_train[im_index])


transform = transforms.Compose(
        [transforms.ToTensor(),
         transforms.Normalize((0.5, 0.5, 0.5), (0.5, 0.5, 0.5))])

print(np.unique(Y_test))
print(np.unique(Y_train))

# convert numpy array to tensor
X_train_tensor = torch.from_numpy(X_train).type(torch.LongTensor)
X_test_tensor = torch.from_numpy(X_test).type(torch.LongTensor)
Y_train_tensor = torch.from_numpy(Y_train).type(torch.LongTensor)
Y_test_tensor = torch.from_numpy(Y_test).type(torch.LongTensor)

X_train_tensor = X_train_tensor.view(-1, 1,28,28).float()
X_test_tensor = X_test_tensor.view(-1, 1,28,28).float()

print(type(X_train_tensor))

# PyTorch train and test sets
train = torch.utils.data.TensorDataset(X_train_tensor, Y_train_tensor)
test = torch.utils.data.TensorDataset(X_test_tensor, Y_test_tensor)

batch_size = 32
trainloader = torch.utils.data.DataLoader(train, batch_size = batch_size,
                                          shuffle = True)
testloader = torch.utils.data.DataLoader(test, batch_size = batch_size,
                                         shuffle = False)
import torch.nn as nn
import torch.nn.functional as F

class Net(nn.Module):
    def __init__(self):
        super(Net, self).__init__()
        self.conv1 = nn.Conv2d(1, 32, kernel_size=5)
        self.conv2 = nn.Conv2d(32, 32, kernel_size=5)
        self.conv3 = nn.Conv2d(32, 64, kernel_size=5)
        self.fc1 = nn.Linear(3*3*64, 256)
        self.fc2 = nn.Linear(256, 10)
    
    def forward(self, x):
        x = F.relu(self.conv1(x))
        x = F.relu(F.max_pool2d(self.conv2(x), 2))
        x = F.dropout(x, p=0.5, training=self.training)
        x = F.relu(F.max_pool2d(self.conv3(x),2))
        x = F.dropout(x, p=0.5, training=self.training)
        x = x.view(-1,3*3*64)
        x = F.relu(self.fc1(x))
        x = F.dropout(x, training=self.training)
        x = self.fc2(x)
        return F.log_softmax(x, dim=1)

net = Net()
print(net)

import torch.optim as optim

criterion = nn.CrossEntropyLoss()
optimizer = optim.SGD(net.parameters(), lr=0.001, momentum=0.9)

for epoch in range(2):
    
    running_loss = 0.0
    for i, data in enumerate(trainloader, 0):
            #get inputs
            inputs, labels = data
            
            #zero parameter gradients
            optimizer.zero_grad()
            
            #back propogation?
            outputs = net(inputs)
            loss = criterion(outputs, labels)
            loss.backward()
            optimizer.step()
            
            #print stats
            running_loss += loss.item()
            if i % 2000 == 1999: #print every 2000 mini-batches
                print('[%d, %5d] loss: %.3f' %
                      (epoch + 1, i + 1, running_loss /2000))
                running_loss = 0.0
print('Finished training!')


# testing
detaiter = iter(testloader)
images, labels = detaiter.next()

classes = [0,1,2,3,4,5,6,7,8,9]
# print images
plt.imshow(torchvision.utils.make_grid(images[1]))
print('GroundTruth: ', ' '.join('%5s' % classes[labels[j]] for j in range(10)))

output = net(images)

_, predicted = torch.max(output, 1)
print('Predicted: ', ' '.join('%5s' % classes[predicted[j]] for j in range(10)))

correct = 0
total = 0
with torch.no_grad():
    for data in testloader:
        images, labels = data
        outputs = net(images)
        