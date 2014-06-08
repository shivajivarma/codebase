'''
INPUT:
1st line: set of 64 bit decimal numbers
2nd line: A key, 64 bit binary number.

Problem: If distance is defined as differene in bits of two numbers, then find all numbers whose distance is less than or equal to 4 from key.
'''
input = raw_input();
input = input.split(",");
key = int(raw_input(),2);
T = len(input)
output = ""
for i in xrange(0, T): 
	if(bin(int(input[i])^key).count("1")<=4):
		output = output + input[i] + ","
print output
