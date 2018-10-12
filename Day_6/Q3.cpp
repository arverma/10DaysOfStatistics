import math
n = int(input())
mean = int(input()) 
std = int(input()) 
p = float(input()) 
z = float(input())
marginOfError = z * std / math.sqrt(n);
print(mean- marginOfError)
print(mean + marginOfError)