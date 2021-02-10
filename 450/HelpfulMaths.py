def solve(s):
	lis = []
	lis.append(s.split('+'))
	sorted(lis)
	print(lis)
	for i in range(len(lis)):
		print(lis[i],'+')
s = input()
solve(s)