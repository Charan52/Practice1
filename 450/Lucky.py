def Lucky(s):
	for i in range(len(s)):
		if s[i]!=4 or s[i]!=7:
			return False
	return True
n = int(input())
s = str(n)
print(Lucky(s))
