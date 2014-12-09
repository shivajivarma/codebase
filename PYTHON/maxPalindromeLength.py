'''
Compute max length of string which is palidrome derived from input string.
'''
def maxPalindromeLength(str):
	leng = 0
	ext = 0
	while(len(str)>0):
		if(str.count(str[0])%2==0):
			leng = leng + (str.count(str[0]))
		else:
			leng = leng + (str.count(str[0])) - 1
			ext = 1
		str = str.replace(str[0],"")
	print leng + ext
	
T = int(raw_input())
for i in xrange(0, T):
	maxPalindromeLength(raw_input())
