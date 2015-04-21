/*
Program to count number of characters, words and lines in a given file.
*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

main(int argc, char *argv[]){
	FILE *f;
	char ch;
	int character=0, line=0,word=0;
	
	f=fopen(argv[1],"r");
	if(f==NULL){
		printf("404: FILE NOT FOUND\n");
		printf("HINT: PASS VALID FILENAME AS ARGUMENT TO THE PROGRAM\n");
		fclose(f);
		return 0;
	}
	printf("FILE NAME: %s\n",argv[1]);
	
	while((ch=getc(f))!=EOF){
		character++;
		if(ch=='\n') 
			line++;
		if(isspace(ch)||ch=='\t'||ch=='\n')
			word++;
	}
	fclose(f);
	
	putchar('\n');
	printf("no of line=%d\n",line);
	printf("no of word=%d\n",word);
 	printf("no of character=%d\n",character);
	
	return 1;
}
/*
With regards,
Shivaji Varma
*/
