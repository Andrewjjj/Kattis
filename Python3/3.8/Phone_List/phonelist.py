a=int(input())
for _ in range(a):
    b=int(input())
    c=[]
    for _ in range(b):
        c.append(input())
    overlay = False
    # for i in range(len(c)):
    #     for j in range(i+1,len(c)):
    #         if c[i] == c[j][0:len(c[i])]:
    #             overlay=True
    #             break

    for i in range(len(c)):
        for j in range(len(c)):
            qlen=len(c[i])
            c[j]=c[j][0:qlen]
        from collections import Counter
        for k,v in Counter(c).items():
            print(k,v)
            if v>1:
                overlay = True
    print(c)

    print("ASD")
    if overlay == False:
        print("YES")
    else:
        print("NO")
