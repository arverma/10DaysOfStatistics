n = int(input())
X = list(map(float, input().split()))
Y = list(map(float, input().split()))

def rank(x, n):
    y = sorted(x)
    r=[]
    for i in range(n):
        for j in range(n):
            if(x[i]==y[j]):
                r.extend([j+1])
    return r

rx = rank(X,n)
ry = rank(Y,n)

d2 = 0
for i in range(n):
    d2 += (rx[i]-ry[i])**2
    
print(round(1-6*d2/(n*(n**2-1)),3))
#print(ry) 
