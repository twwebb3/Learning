# -*- coding: utf-8 -*-
"""
Created on Tue Jan 03 17:03:46 2017

@author: webbth

Write a function isIn that accepts two strings as arguments
and returns True is either string occurs anywhere in the other, and False
otherwise. Hint: you might want to use the built-in str operation in.
"""

def isIn(obj1,obj2):
    x=str(obj1)
    y=str(obj2)
    if len(x)>len(y):
        times=range(0,len(x)-len(y)+1)
        for i in times:
            if x[i:len(y)+i] in y:
                return True
    if len(y)>len(x):
        times=range(0,len(y)-len(x)+1)
        for i in times:
            if y[i:len(x)+i] in x:
                return True
    if len(y)==len(x):
        if y in x:
            return True
    return False


string1=raw_input("Input first string: ")
string2=raw_input("Input second string: ")
print isIn(string1,string2)