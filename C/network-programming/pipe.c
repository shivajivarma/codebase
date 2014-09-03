#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	char buffer[20];
	int pfd[2];
	if(pipe(pfd)==-1){
		printf("Pipe Creation Failed"); 
		exit(0);
	}
	else printf("Pipe Created Successfully\n");

	printf("Writing to pipe\n");
	write(pfd[1],"Hello World",11);
	
	printf("Reading from pipe to buffer\n");
	read(pfd[0],buffer,11);
	
	printf("Buffer : %s\n",buffer);
}
