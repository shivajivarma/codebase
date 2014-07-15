'''
Program to print the sentence in reverse.
Eg: 
  input: There is a cat on the wall
  output: wall the on cat a is There

The works in Python 3 or above.
'''
sentence = raw_input()
word = sentence.split()
for i in reversed(word): print(i,end=" ")
