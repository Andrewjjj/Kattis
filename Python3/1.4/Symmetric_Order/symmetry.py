ssset=1
while True:
    refresh = False;
    a=int(input())
    if a is 0:
        break
    d=[]
    for i in range(a):
        d.append(input())

    newlist = [0]*len(d)
    # aa=d
    # d.sort(key=len)
    # bb=d
    # for i in range(len(d)):
    #     if len(aa[i]) != len(bb[i]):
    #         refresh = True
    f=1
    g=0
    t=True;
    # if refresh == True:
    for i in range(int(len(d))):

        if t == True:
            newlist[g]=d[i]
            g+=1
            t = False
        else:
            newlist[-f]=d[i]
            f+=1
            t = True
    # else:
    #     newlist = aa
    print("SET",ssset)
    ssset += 1
    for i in newlist:
        print(i)
