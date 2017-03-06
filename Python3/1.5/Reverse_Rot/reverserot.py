d1=dict() #alph to num
d2=dict() #num to alph
msgstr = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ_.'
q=0
for i in msgstr:
    d1[i]=q
    d2[q]=i
    q+=1
# print (d1)
# print (d2)


while True:
    a=input().split()
    fwd = int(a[0])
    if fwd==0:
        break

    msg = [d1[w] for w in a[1]]
    # print("1",msg)
    for i in range(len(msg)):
        msg[i]+=fwd
        msg[i]=msg[i]%28
    msg = [d2[a] for a in msg]
    # print("2",msg)
    msg.reverse()
    # print("3",msg)
    w="".join(msg)
    print(w)
