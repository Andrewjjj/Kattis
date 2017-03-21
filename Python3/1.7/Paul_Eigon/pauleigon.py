a,b,c = [int(a) for a in input().split()]
d=int((b+c)/a)%2
# print(d)
# t=0
# q=False
# while t <= d:
#     for i in range(t,t+a):
#         t+=1
#         if t<=d:
#             q=True
#             break;
#     for j in range(t,t+a):
#         t+=1
#         if t<=d:
#             q=False
#             break;
if d == 1:
    print('opponent')
else:
    print('paul')
