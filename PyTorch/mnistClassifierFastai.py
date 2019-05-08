# -*- coding: utf-8 -*-
"""
Created on Thu Apr 11 11:48:53 2019

@author: twebb
"""

import numpy as np
import matplotlib.pyplot as plt

import torch
import torchvision.transforms as transforms
import fastai

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


learn = fastai.vision.learner.create_cnn(train, 
                           models.resnet34, 
                           metrics=fastai.metrics.error_rate)