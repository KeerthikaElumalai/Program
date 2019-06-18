a,b=list(map(int,input().split()))
c,d=list(map(int,input().split()))
e,f=list(map(int,input().split()))
g,h=list(map(int,input().split()))
i=d-b
j=f-h
k=e-c
l=g-a
if (i==j==k==l):
    print("yes")
else:
    print("no")
