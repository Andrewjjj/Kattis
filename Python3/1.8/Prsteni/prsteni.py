# def nn(a):
#     den = 0
#     for i in range(1,int(min(a)+1)):
#         print(i)
#         if [q%i==0 for q in a]:
#             den = i
#     return [int(q/den) for q in a]
def nn(a,b):
    den = 0
    for i in range(1,int(min(a,b)+1)):
        # print(i)
        if a%i == 0 and b%i == 0:
            den = i
    return int(a/den),int(b/den)

a=int(input())
b=[int(q) for q in input().split()]
# print("B",b)
for i in range(1,len(b)):
    g,h=nn(b[0],b[i])
    print(str(g)+"/"+str(h))
