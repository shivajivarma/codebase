/*
Program to reverse a portion of a stentence from postion start to end.

Eg: 
Enter a string: hello world
Enter start and end positions: 0 4

Reverse of portion of the sentence:
olleh world

Reverse of entire sentence:
dlrow olleh
*/

#include <stdio.h>
#include <string.h>

//	Function to reverse portion of string from position 'start' to 'end'.
void reverseString(char * str,int start,int end){
	int i, len=(end-start)+1; 
	char temp;
	
	for(i=0,str=str+start;i<len/2;i++){
		temp = *(str+i);
		*(str+i) = *(str+len-1-i);
		*(str+len-1-i) = temp;
	}
}


void main(){
	char str[20],revStr[20];
	int start, end;
	
	printf("Enter a string: ");
	gets(str);
	strcpy(revStr,str);
	
	printf("Enter start and end positions: ");
	scanf("%d %d",&start,&end);
	reverseString(str,start,end);
	printf("\nReverse of portion of the sentence:");
	printf("\n%s\n",str);
	
	printf("\nReverse of entire sentence:");
	reverseString(revStr,0,strlen(revStr)-1);
	printf("\n%s",revStr);
}
