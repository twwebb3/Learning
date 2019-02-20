# -*- coding: utf-8 -*-
"""
Created on Wed Dec 28 12:09:06 2016

@author: webbth


Write a program that asks the user to input 10 integers,
and then prints the largest odd number that was entered.
If no odd number was entered, it should print a message to that effect.
"""

numbers=raw_input("Input 10 integers (seperated by commas): ")
p1=numbers.split(",")
#p2=dict([s.split() for s in p1])
#for key in p1:
#    p1[key]=int(p1[key])

mxIn=0
index=range(0,9)
for key in index:
    if int(p1[key])%2!=0:
        mxIn=max(mxIn,int(p1[key]))

if mxIn==0:
    print 'No odd number was entered.'
else:
    print mxIn, ' was the largest odd number entered.'