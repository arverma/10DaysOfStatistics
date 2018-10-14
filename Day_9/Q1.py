# -*- coding: utf-8 -*-
"""
Created on Sun Oct 14 21:10:18 2018

@author: amanranjan
"""

import numpy as np
m,n_train = [int(i) for i in (input().strip().split())]
x = np.empty((0,m+1), float)
y = np.empty((0,1), float)
for i in range(n_train): 
    temp = [1] + [float(j) for j in (input().strip().split())]
    x = np.append(x,[temp[0:m+1]],0)
    y = np.append(y,[[temp[m+1]]],0)
n_test = int(input())
q = np.empty((0,m+1), float)
for i in range(n_test):
    temp = [1] + [float(j) for j in (input().strip().split())]
    q = np.append(q,[temp],0)
flag = np.dot(np.dot(np.linalg.inv(np.dot(x.T,x)),x.T),y)
# print(flag)
# print(q)
#print(len(temp))
Y = np.dot(q,flag)
for i in Y:
    for j in i:
        print(round(j,2))