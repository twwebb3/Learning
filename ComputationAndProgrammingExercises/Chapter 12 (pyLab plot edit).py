# -*- coding: utf-8 -*-
"""
Created on Wed Jan 18 09:31:44 2017

@author: webbth

Modify the code in Figure 12.3 so that it produces plots like
those shown above.
"""

import random
import pylab

def flipPlot(minExp, maxExp):
    """Assumes minExp and maxExp positive integers; minExp < maxExp
       Plots results of 2**minExp to 2**maxExp coin flips"""
    ratios=[]
    diffs=[]
    xAxis=[]
    for exp in range(minExp, maxExp+1):
        xAxis.append(2**exp)
    for numFlips in xAxis:
        numHeads=0
        for n in range(numFlips):
            if random.random() < 0.5:
                numHeads += 1
        numTails=numFlips-numHeads
        ratios.append(numHeads/float(numTails))
        diffs.append(abs(numHeads-numTails))
    pylab.title('Difference Between Heads and Tails')
    pylab.xlabel('Number of Flips')
    pylab.ylabel('Abs(#Heads - #Tails)')
    pylab.plot(xAxis, diffs,'bo')
    pylab.semilogx()
    pylab.semilogy()
    pylab.figure()
    pylab.title('Heads/Tails Ratios')
    pylab.xlabel('Number of Flips')
    pylab.ylabel('#Heads/#Tails')
    pylab.plot(xAxis, ratios,'bo')
    pylab.semilogx()


random.seed(0)
flipPlot(4,20)