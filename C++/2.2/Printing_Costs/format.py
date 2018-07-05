import sys
tot=[]
for line in sys.stdin:
    tot.append(line.strip().split())

qa=dict()
tot2=[]
for a in tot:
    for i in range(len(a)-1):
        if i%2==1:
            continue
        print("{'", a[i], "',", a[i+1], "}, ", sep="")


print(qa)
