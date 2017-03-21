a=int(input())
t=dict()
notes=['G','F','E','D','C','B','A','g','f','e','d','c','b','a']
for i in notes:
    # if i in ['G','E','C','A','f','d','c','b']:
        # t[i]=[' ']*a
    # else:
    t[i]=['-']*a

b=[a for a in input().split()]
# print(notes)
# print(b)
# print(t)
print (a,len(b))
for i in range(len(b)):
    if len(b[i][0])==1:
        t[b[i][0]][i]=t[b[i][0]][i].replace('-','*')
    else:
        alen = int(b[i][1:])
        b=['*']*alen
        t[b[i][0]][i]=t[b[i][0]][i].replace('-',b)

for i in notes:
    if i in ['G','E','C','A','f','d','c','b']:
        t[i]=[t[i][a].replace('-',' ') for a in range(len(t))]
for i in notes:
    q="".join(t[i])
    print(q)
