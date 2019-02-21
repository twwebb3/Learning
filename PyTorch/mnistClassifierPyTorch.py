# -*- coding: utf-8 -*-
"""
Created on Thu Feb 21 16:06:25 2019

@author: twebb
"""

import pickle
import numpy as np
import matplotlib.pyplot as plt

pkl_file = open('data/x_train_mnist.pkl', 'rb')
X_train = pickle.load(pkl_file)
pkl_file.close()

pkl_file = open('data/x_test_mnist.pkl', 'rb')
X_test = pickle.load(pkl_file)
pkl_file.close()

pkl_file = open('data/y_train_mnist.pkl', 'rb')
Y_train = pickle.load(pkl_file)
pkl_file.close()

pkl_file = open('data/y_test_mnist.pkl', 'rb')
Y_test = pickle.load(pkl_file)
pkl_file.close()

print(np.shape(X_train))
print(np.shape(X_test))
print(np.shape(Y_train))
print(np.shape(Y_test))

im_index=0
print(Y_train[im_index])
plt.imshow(X_train[im_index])