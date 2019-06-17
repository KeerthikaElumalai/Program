import sys, string, math
from itertools import permutations, combinations
n = input()
dic1 = {}
for c in 'dhoni' :
    dic1[c] = 1
dic2 = {}
for c in n :
    if c in dic2 :
        dic2[c] += 1
    else :
        dic2[c] = 1
if dic1 == dic2 : 
  print('yes')
else :            
  print('no')
