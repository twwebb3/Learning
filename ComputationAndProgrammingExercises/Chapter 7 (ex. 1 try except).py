# -*- coding: utf-8 -*-
"""
Created on Thu Jan 12 09:16:13 2017

@author: webbth

Implement a function that meets the specification below. Use
a try-except block.

    def sumDigits(s):
        Assumes s is a string
        Returns the sum of the decimal digits in s
            For example, if s is 'a2b3c' it ruturns 5
"""


def sumDigits(s):
    x=str(s)
    nums=0
    for i in x:
        if i.isdigit():
            nums += int(i)
    return nums

try:
    string=int(raw_input("Enter an integer: "))
    print sumDigits(string)
except ValueError:
    print 'You have entered non-digit values.'
