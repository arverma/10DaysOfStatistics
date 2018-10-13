import math

def std(x,y,mean,n):
    sum_x = 0
    sum_y = 0
    for i in range(n):
        sum_x += math.pow(x[i],2)
        sum_y += math.pow(y[i],2)
    sum_x = math.sqrt(sum_x/n-mean[0]**2)
    sum_y = math.sqrt(sum_y/n-mean[1]**2)
    return [sum_x,sum_y]

def mean(x,y,n):
    x = sum(x)/n
    y = sum(y)/n
    return [x,y]
    
n = int(input())
x = list(map(float,input().strip().split()))
y = list(map(float,input().strip().split()))

mean = mean(x,y,n)
std = std(x,y,mean,n)
temp = 0 
for i in range(n):
    temp += (x[i]-mean[0])*(y[i]-mean[1])
#print(temp,std[0],std[1])
print(round(temp/(n*std[0]*std[1]), 3))