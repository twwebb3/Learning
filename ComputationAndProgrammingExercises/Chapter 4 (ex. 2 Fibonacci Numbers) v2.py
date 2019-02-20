# -*- coding: utf-8 -*-
"""
Created on Tue Jan 10 13:45:13 2017

@author: webbth

When the implementation of fib is used to
compute fib(5), how many times does it compute the value fib(2)?
"""


""" proper Fibonacci function
def fib(n):
    #Assumes n an int>=0 Returns Fibonacci of n
    if n==0 or n==1:
        return 1
    else:
        return fib(n-1) + fib(n-2)
        
x=fib(5)
#print counter"""

counter=0
def fib(n):
    """Assumes n an int>=0 Returns Fibonacci of n"""
    global counter
    if n==0 or n==1:
        return 1
    else:
        if n-1==2 or n-2==2:
            counter+=1
        return fib(n-1) + fib(n-2)
        

def testFib(n):
    for i in range(n+1):
        print 'fib of', i, '=', fib(i)

print fib(5)
print counter