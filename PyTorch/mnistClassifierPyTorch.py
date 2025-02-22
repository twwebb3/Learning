
import numpy as np
import matplotlib.pyplot as plt

import torch
import torchvision
import torchvision.transforms as transforms

import time

start_time = time.time()

def read_pkl(filepath):
    import pickle
    pkl_file = open(filepath, 'rb')
    temp = pickle.load(pkl_file)
    pkl_file.close()
    return temp

# specify device according to if Mac M1 machine is used or NVIDIA GPU is available.
device = torch.device('cuda:0' if torch.cuda.is_available() else 'mlp')

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
        self.conv1 = nn.Conv2d(1, 32, kernel_size=5, padding=2)  # padding for preserving size
        self.bn1 = nn.BatchNorm2d(32)

        self.conv2 = nn.Conv2d(32, 64, kernel_size=5, padding=2)
        self.bn2 = nn.BatchNorm2d(64)

        self.conv3 = nn.Conv2d(64, 128, kernel_size=5, padding=2)
        self.bn3 = nn.BatchNorm2d(128)

        self.fc1 = nn.Linear(3*3*128, 512)
        self.fc2 = nn.Linear(512, 256)
        self.fc3 = nn.Linear(256, 10)

    def forward(self, x):
        x = F.relu(self.bn1(self.conv1(x)))
        x = F.max_pool2d(x, 2)

        x = F.relu(self.bn2(self.conv2(x)))
        x = F.max_pool2d(x, 2)
        x = F.dropout(x, p=0.3, training=self.training)

        x = F.relu(self.bn3(self.conv3(x)))
        x = F.max_pool2d(x, 2)
        x = F.dropout(x, p=0.4, training=self.training)

        x = x.view(-1, 3 * 3 * 128)
        x = F.relu(self.fc1(x))
        x = F.dropout(x, p=0.5, training=self.training)

        x = F.relu(self.fc2(x))
        x = F.dropout(x, p=0.5, training=self.training)

        x = self.fc3(x)

        return F.log_softmax(x, dim=1)


net = Net().to(device)
print(net)

import torch.optim as optim

criterion = nn.CrossEntropyLoss()
optimizer = optim.SGD(net.parameters(), lr=0.001, momentum=0.9)

for epoch in range(10):
    
    running_loss = 0.0
    for i, data in enumerate(trainloader, 0):
            #get inputs
            inputs, labels = data[0].to(device), data[1].to(device)
            
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
images, labels = next(detaiter)
images, labels = images.to(device), labels.to(device)

classes = [0,1,2,3,4,5,6,7,8,9]
# print images
#plt.imshow(torchvision.utils.make_grid(images[1]))
print('GroundTruth: ', ' '.join('%5s' % classes[labels[j]] for j in range(10)))

output = net(images)

_, predicted = torch.max(output, 1)
print('Predicted: ', ' '.join('%5s' % classes[predicted[j]] for j in range(10)))

correct = 0
total = 0
with torch.no_grad():
    for data in testloader:
        images, labels = data[0].to(device), data[1].to(device)
        outputs = net(images)
        _, predicted = torch.max(outputs.data, 1)
        total += labels.size(0)
        correct += (predicted == labels).sum().item()

print('Accuracy of the network on the 10000 test images: %d %%' % (
    100 * correct / total))

end_time = time.time()
elapsed_time = end_time - start_time

print(f"Time taken: {elapsed_time:.2f} seconds")