# -*- coding: utf-8 -*-
"""
Created on Thu Jan 12 09:51:30 2017

@author: webbth

Implement a function that stisfies the specification
    def findAnEven(l):
        Assumes l is a list of integers
        Returns the first even number in l
        Raises ValueError if l does not contain an even number
"""

def findAnEven(l):
    x=str(l)
    while True:
        for i in x:
            if i.isdigit():
                if int(i)%2==0:
                    return i
        break
    raise ValueError


while True:
    try:
        string=raw_input("Enter some integers: ")
        print findAnEven(string)
        break
    except ValueError:
        print string, 'contains characters that are not integers.'
