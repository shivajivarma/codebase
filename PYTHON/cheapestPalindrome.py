'''
Palindrome is a string that reads the same backward as forward, e.g., madam.

You are given a string whose length is even, and each character of the string is either 'a', 'b' or '/' Your task is to replace each occurrence of '/' in string with either 'a' or 'b' such that the string becomes a palindrome.

You are also given two integers, aCost and bCost. Replacing '/' with 'a' costs aCost, and replacing '/' with 'b' costs bCost.

Return the minimum cost of replacing '/' by 'a' and 'b' such that the string turns into a palindrome. If it is impossible to obtain a palindrome, return -1.

Constraints:

    string will contain between 1 and 10000 characters, inclusive.
    The length of string will be even.
    Each character of the string will be either 'a' or 'b' or '/'.
    aCost will be between 1 and 100, inclusive.
    bCost will be between 1 and 100, inclusive.

'''
def cost(s, aCost, bCost):
	totalCost = 0
	strlen = len(s)
	s = list(s)
	for i in xrange(strlen):
		if s[i]=='/':
			if (s[(strlen - i) - 1]=='a'):
				totalCost = totalCost + aCost
				s[i] = 'a'
			elif s[(strlen - i) - 1] == 'b':
				totalCost = totalCost + bCost
				s[i] = 'b'
			else:
				if aCost < bCost:
					totalCost = totalCost + aCost
					s[i] = 'a'
				else:
					totalCost = totalCost + bCost
					s[i] = 'b'
				
	s = "".join(s)
	if str(s) != str(s)[::-1]:
		totalCost  = -1
	return totalCost
 
if __name__=="__main__":
	n = int(raw_input())
	for i in xrange(n):
		print cost(raw_input(), int(raw_input()), int(raw_input()))
