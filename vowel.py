vowels=("a","e","i","o","u","A","E","I","O","U")
x=raw_input()
if(x in vowels):
 print("Vowel")
elif(x not in vowels):
 print("Consonant")
else:
 print("Invalid")
