def CheckPanagram(s,p):
	c=0
	for i in s:

		if  sorted(i) == sorted(p):
			c+=1
	print(c)

s = input().split()
p = input()
CheckPanagram(s,p)