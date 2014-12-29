'''
Function to print a sentence in reverse.
Eg: 
  input: There is a cat on the wall
  output: wall the on cat a is There
'''
def reverseSentence(sentence):
	words = sentence.split()
	reverse = ""
	for word in reversed(words):
		reverse = reverse + word + " "
	return reverse[:len(reverse)-1]

'''
Function to print sentences in a paragraph in reverse.
Eg: 
  input: There is a cat on the wall. Hello World.
  output: wall the on cat a is There. World Hello.
'''
def reverseAllSentences(paragraph):
	output = ""
	sentences = paragraph.split(".")
	for sentence in reversed(sentences):	
		output = output + reverseSentence(sentence) + "."
	return output;
 
if __name__=="__main__":
	print("Enter a paragraph: ", end="")
	paragraph = input()
	print(reverseAllSentences(paragraph))
