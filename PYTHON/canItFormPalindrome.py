'''
Can one of the permutation of given string, forms a palindrome or not?
Eg:
ssm

It can be resolved to sms, which is a palindrome.
'''
def canItFormPalindrome(str):
	odd = 0
	while(len(str)>0):
		if(str.count(str[0])%2==1):
			odd = odd + 1
		if(odd > 1):
			return False
		str = str.replace(str[0],"")
	return True
