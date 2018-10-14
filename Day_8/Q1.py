x = [95, 85, 80, 70, 60]
y = [85, 95, 70, 65, 70]

x_sum = sum(x)
y_sum = sum(y)

sum_xy = 0
sum_xx = 0
for i in range(5):
    sum_xy += x[i]*y[i]
    sum_xx += x[i]**2

m = (5*sum_xy - x_sum*y_sum)/(5*sum_xx-x_sum**2)
c = y_sum/5 - m*x_sum/5
print(round(m*80+c,3))