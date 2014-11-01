def combo(str,ins,n):
	output = ""
	for i in xrange(len(str)-2, -1, -1):
		if(n%2 == 1):
			output = ins + output
		output = str[i] + output
		n = n/2
	print output + str[len(str)-1]
	
def allCombos(word,symbol):
	N = pow(2,len(word)-1)
	for i in xrange(N):
		combo(word,symbol,i)
	
allCombos('tests','#')
