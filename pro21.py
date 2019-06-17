m=int(input())
s=list(map(int,input().split()))
x=q=v=g=0

for i in range(0,m-1):
    if i==0:
        x=(x+s[i])/(i+1)
    else:
        x=0
        for t in range(0,i):
            x=x+s[t]
        x=(x+s[i])//(i + 1)
    g=0
    for j in range(i+1,m):
        q=q+s[j]
        g=g+1
        if j==m-1:
            q=q//(g)
    if x==q:
        v=1
        print("yes")
if v==0:
    print("no")
