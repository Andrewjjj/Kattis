def isPrime(num):
    import math
    if num<2:
        return False
    for i in range(2,int(math.sqrt(num))+1):
        if num%i == 0:
            return False
    return True

def isHappy(num):
    a=set()
    while num != 1:
        num=sum(int(a)**2 for a in str(num))
        if num in a:
            return False
        a.add(num)
    return True

# def isHappy(num):
#     t=[a for a in str(num)]
#     happy=False
#     while 1:
#         summ = 0
#         for j in range(len(t)):
#             summ += int(t[j])**2
#         t=[a for a in str(summ)]
#         if len(t)==1:
#             if summ == 1:
#                 return True
#             else:
#                 return False

a=int(input())
b=[]
# b=[0]*a

for _ in range(a):
    c=input().split()
    b.append(int(c[1]))
    # b[int(c[0])-1]=(int(c[1]))

for i in range(len(b)):
    if isHappy(b[i]) and isPrime(b[i]):
        print(i+1,b[i],"YES")
    else:
        print(i+1,b[i],"NO")
