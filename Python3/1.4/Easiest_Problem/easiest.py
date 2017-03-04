import sys

alist=[]
# for line in sys.stdin:
#     if line[0] == '0':
#         break;
#     alist.append(line.split())

while True:
    a=int(input())
    if(a == 0):
        break;
    alist.append(a)


# print(alist)
def getsumofdigits(a):
    return sum(int(digits) for digits in str(a))

for d in alist:
    # print(getsumofdigits(d))
    i=11
    while getsumofdigits(d) != getsumofdigits(i*d):
        # print(i*d)
        # print(getsumofdigits(i*d))
        i+=1
    print(i)

            # print("")
