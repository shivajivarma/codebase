T = int(raw_input())
for i in xrange(0, T):
	num = int(raw_input())
	b = pow(5,num)
	l = num - len(str(b))
	output = "0."
	for j in xrange(0, l):
		output = output + "0"
	print output + str(b)
