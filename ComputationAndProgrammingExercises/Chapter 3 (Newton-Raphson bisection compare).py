# -*- coding: utf-8 -*-
"""
Created on Tue Jan 03 16:38:47 2017

@author: webbth

Add some code to the implementation of Newton-Raphson that
keeps track of the number of iterations used to find the root. Use that code as
part of a program that compares the efficiency of Newton-Raphson and bisection
search (You should discover that Newton-Raphson is more efficient.)
"""

#Bisection method
x=24
epsilon=0.01
bisectionCount=0
low=0.0
high = max(1.0,x)
ans=(high+low)/2.0
while abs(ans**2 - x)>=epsilon:
    bisectionCount += 1
    if ans**2<x:
        low = ans
    else:
        high=ans
    ans = (high+low)/2.0
print ans, 'is close to square root of', x


#Newton-Raphson for square root
epsilon=0.01
k=24.0
guess=k/2.0
newtonCount=0
while abs(guess*guess - k)>=epsilon:
    guess = guess -(((guess**2)-k)/(2*guess))
    newtonCount=newtonCount+1
print 'Square root of', k, 'is about', guess

if bisectionCount>newtonCount:
    print 'The Newton-Raphson Method is more efficient than the bisection method.'
else:
    print 'The bisection method is more efficient than the Newton-Raphson Method.'