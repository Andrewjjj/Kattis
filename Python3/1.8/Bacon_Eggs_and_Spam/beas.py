while 1:
    a=int(input())
    if a==0:
        break
    lists=dict()
    for _ in range(a):
        b=input().split()
        for i in b[1:]:
            if i in lists:
                lists[i].append(b[0])
            else:
                lists[i] = [b[0]]
    # print("P:",sorted(lists.items()))
    for x,y in sorted(lists.items()):
        y.sort()
        a=" ".join(y)
        print(x,a)
    print()
