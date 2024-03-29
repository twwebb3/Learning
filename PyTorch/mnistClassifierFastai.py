

import numpy as np
import matplotlib.pyplot as plt
import pickle
from fastai.vision.all import *

def read_pkl(filepath):
    with open(filepath, 'rb') as pkl_file:
        return pickle.load(pkl_file)

# Load data
X_train = read_pkl(filepath='data/x_train_mnist.pkl')
X_test = read_pkl(filepath='data/x_test_mnist.pkl')
Y_train = read_pkl(filepath='data/y_train_mnist.pkl')
Y_test = read_pkl(filepath='data/y_test_mnist.pkl')

# Convert numpy arrays to tensors
X_train_tensor = torch.tensor(X_train).float().unsqueeze(1)
X_test_tensor = torch.tensor(X_test).float().unsqueeze(1)
Y_train_tensor = torch.tensor(Y_train).long()
Y_test_tensor = torch.tensor(Y_test).long()

# Create DataLoaders
dls = DataLoaders.from_tensor((X_train_tensor, Y_train_tensor), (X_test_tensor, Y_test_tensor), bs=32, shuffle_train=True)

# Define the model
class Net(Module):
    def __init__(self):
        self.conv1 = nn.Conv2d(1, 32, kernel_size=5, padding=2)
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
        return F.log_softmax(self.fc3(x), dim=1)

# Train the model
learn = Learner(dls, Net(), loss_func=nn.CrossEntropyLoss(), metrics=accuracy, opt_func=SGD, lr=0.001, cbs=CudaCallback)
learn.fit(10, lr=0.001)

# Evaluate the model
interp = ClassificationInterpretation.from_learner(learn)
print(interp.confusion_matrix())
