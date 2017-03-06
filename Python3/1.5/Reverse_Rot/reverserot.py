while True:
    a=input().split()
    fwd = int(a[0])
    if fwd==0:
        break

    msg = [ord(w) for w in a[1]]
    for i in range(len(msg)):
        msg[i]+=fwd
    msg = [chr(a) for a in msg]
    print(msg)
