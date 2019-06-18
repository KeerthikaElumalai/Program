a=input()
b = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
c = 0
for i in range(len(a)):
	if i > 0 and b[a[i]] > b[a[i - 1]]:
		c = c+ b[a[i]] - 2 * b[a[i - 1]]
	else:
		c = c+ b[a[i]]
print (c)
