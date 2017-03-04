gunner=[a for a in input().split()]
emma=[a for a in input().split()]
a=0
b=0
pos1=[]
pos2=[]
pos3=[]
pos4=[]
for i in range(int(gunner[0]), int(gunner[1])+1):
    pos1.append(i)
for j in range(int(gunner[2]), int(gunner[3])+1):
    pos2.append(j)
for k in range(int(emma[0]), int(emma[1])+1):
    pos3.append(k)
for l in range(int(emma[2]), int(emma[3])+1):
    pos4.append(l)

# for i in range(len(pos1)):
#     for j in range(len(pos2)):
#         if pos1[i] > pos2[j]:
#             a+=1
#         elif pos1[i] < pos2[j]:
#             b+=1
a=(sum(pos1)/((int(gunner[1])-int(gunner[0])+1)))+(sum(pos2)/((int(gunner[3])-int(gunner[2])+1)))
b=(sum(pos3)/((int(emma[1])-int(emma[0])+1)))+(sum(pos4)/((int(emma[3])-int(emma[2])+1)))
# print(a,b)
# print(sum(pos1), sum(pos2), sum(pos3), sum(pos4))
if a>b:
    print ("Gunnar")
elif b>a:
    print ("Emma")
else:
    print ("Tie")
