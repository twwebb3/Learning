# -*- coding: utf-8 -*-
"""
Created on Thu Jan 26 12:22:51 2017

@author: webbth
"""
import pylab
import os
os.chdir('S:\\BFP\TWW\Python\Data')

def getData(fileName):
    dataFile=open(fileName,'r')
    distances=[]
    masses=[]
    dataFile.readline() #skips header
    for line in dataFile:
        d, m, trash=line.split(' ')
        distances.append(float(d))
        masses.append(float(m))
    dataFile.close()
    return(masses,distances)

def plotData(inputFile):
    masses, distances=getData(inputFile)
    masses=pylab.array(masses)
    distances=pylab.array(distances)
    forces=masses*9.81
    pylab.plot(forces, distances, 'bo',
               label = 'Measured displacements')
    pylab.title('Measured Displacement of Spring')
    pylab.xlabel('|Force| (Newtons)')
    pylab.ylabel('Distance (meters)')
    
def fitData(inputFile):
    masses, distances=getData(inputFile)
    masses=pylab.array(masses)
    distances=pylab.array(distances)
    forces=masses*9.81
    pylab.plot(forces, distances, 'bo',
               label = 'Measured displacements')
    pylab.title('Measured Displacement of Spring')
    pylab.xlabel('|Force| (Newtons)')
    pylab.ylabel('Distance (meters)')
    #find cubic fit
    a,b,c,d=pylab.polyfit(forces,distances,3)
    inc=forces[1]-forces[0]
    for i in range(9):
        forces=pylab.append(forces,forces[len(forces)-1]+inc)
    predictedDistances=a*(forces**3)+b*forces**2+c*forces+d
    pylab.plot(forces, predictedDistances, 'b:',label='cubic fit')
    pylab.legend(loc='best')
               
fitData('springData.txt')