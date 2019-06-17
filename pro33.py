n=input()
flag3=0
for i in range(0,len(n)-1):
  for j in range(i+1,len(n)):
    if n[i]<n[j]:
      flag3=1
      print(n[j:])
      break
  if flag3==1:
    break
else:
  print(n)
