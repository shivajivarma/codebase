''' 
If input is fun,$
output:
f$un
fu$n
f$u$n
'''
def insert(str,ins,n):
	for i in xrange(len(str)-n):
		output = str
		for j in xrange(n):
			output = output[:i+(j*2+1)] + ins + output[i+(j*2+1):]
		print output
	
def get_combinations(word,symbol):
	for i in xrange(len(word)-1):
		insert(word, symbol,i+1)

get_combinations('testing','#')
