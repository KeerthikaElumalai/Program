n=int(input())
m=[]
for i in range(n):
    l=[]
    l=list(map(int,input().split()))
    m.append(l)
 
s=[]   
for i in m:
    for j in i:
        s.append(j)
s.sort()
for i in s:
    print(i,end=" ") 
