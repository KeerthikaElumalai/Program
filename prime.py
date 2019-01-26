number=int(input())
if number>1:
 for i in range(2,number):
  if (number%i)==0:
   print("Not a Prime number")
   break
  else:
   print("Is a Prime number")
else:
 print("Not a Prime number")
 
