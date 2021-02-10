from collections import Counter 
charan = input().split()
s = input()
charan1 = charan[1:]
c=0
for i in charan:
	charan1 = Counter(i)
	if charan1 == Counter(s):
		c+=1
print(c)