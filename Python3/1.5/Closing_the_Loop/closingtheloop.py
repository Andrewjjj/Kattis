a=int(input())
case = 0
# import sys
# inss=[]
# for line in sys.stdin:
#     inss.append(line.strip())
#
# print(inss)

for _ in range(a):
    case += 1
    b=int(input())
    # for _ in range(b):
    q=[a for a in input().split()]
    # for i in range(len(q)-1):
    #     if q[i][1] is not q[i+1][q]:
    #         int(q[i][0])+int(q[i+1][0])
    #
    blist=[]
    rlist=[]
    start = q[0][1]
    # print("STARTIG WTH",start)
    for i in range(len(q)):
        if q[i][-1]=='B':
            q[i]=q[i].replace("B","")
            blist.append(int(q[i]))
        else:
            q[i]=q[i].replace("R","")
            rlist.append(int(q[i]))
    blist.sort()
    blist.reverse()
    rlist.sort()
    rlist.reverse()

    lentot = 0
    # print(blist)
    # print(rlist)
    if len(blist) == 0 or len(rlist) == 0:
        print("Case #", case, ": 0", sep="")
        continue
    minlen=min(len(blist), len(rlist))
    # print("MINLEN:", minlen)
    if start == 'B':
        # print("START WITH B")
        lentot=blist[0]
        turn=False
        i=1
        j=0
    else:
        # print("START WITH R")
        lentot=rlist[0]
        turn=True
        i=0
        j=1
    addee=minlen*2
    minlen=minlen*2-1
    # print("Starting with", lentot)
    while minlen>0:
        # i=0
        # j=0
        # print("IN")
        if turn == True:
            lentot+=blist[i]
            # print(blist[i]-1,"ADDED BB")
            i+=1
            turn = False
            minlen-=1
        elif turn == False:
            lentot+=rlist[j]
            # print(rlist[j]-1,"ADDED RR")
            j+=1
            turn = True
            minlen-=1
        # print("Current Total:",lentot)
    lentot = lentot-addee
    print("Case #", case, ": ",lentot, sep="")
