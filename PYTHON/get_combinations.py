def combo(str,ins,n):
	output = ""
	for i in range(len(str)-2, -1, -1):
		if(n%2 == 1):
			output = ins + output
		output = str[i] + output
		n = n//2
	print(output + str[len(str)-1])
	
def get_combinations(word,symbol):
	N = pow(2,len(word)-1)
	for i in range(N):
		combo(word,symbol,i)
	
get_combinations('tests','#')
