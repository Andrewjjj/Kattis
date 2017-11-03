import math

a=[int(a) for a in input().split()]
for q in range(a[0]):
    if int(input())<=math.sqrt(a[1]**2+a[2]**2):
        print("DA")
    else:
        print("NE")
