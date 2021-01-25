import random

def calPi(n):
    point_circle = 0
    point_total = 0
    for i in range(n):
        x = random.uniform(0,1)
        y = random.uniform(0,1)
        
        distance = x**2+y**2
        if distance <= 1:
            point_circle += 1
        point_total += 1
    
    return 4*point_circle/point_total

p = int(input())
ans = calPi(p)
print(ans)