/*

Program to reverse a portion of a stentence from postion start to end.

Eg: 
Input: Hello world
Start postion: 0
End postion: .


*/

#include <stdio.h>

//	Function to reverse portion of string from position 'start' to 'end'. 
void reverseString(char * str,int start,int end){
	int i, len=end-start; 
	char temp;
	
	for(i=0,str=str+start;i<len/2;i++){
		temp = *(str+i);
		*(str+i) = *(str+len-1-i);
		*(str+len-1-i) = temp;
	}
}


void main(){
	char str[20];
	
	printf("Enter a string: ");
	gets(str);
	
	reverseString(str,0,strlen(str));
	
	printf("%s",str);
}
