/*

An Armstrong number is a number such that the sum of its digits raised to the third power is equal to the number itself.  
For example, 371 is an Armstrong number, since 3^3 + 7^3 + 1^3 = 371.
Another example, 153. 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.

*/

#include<stdio.h>


int isAmstrong(int num){
    
    int temp = num,sum=0,digit;
    
    while (temp != 0) {
    	digit = temp % 10;
		sum=sum +(digit*digit*digit);
		temp=temp/10;
	}
    
    if(num == sum)
        return 1;
    
    return 0;
}

int main(){
    
    int n;
    	
	printf("Enter number : ");	
	scanf("%d",&n);
	
	if (isAmstrong(n))
		printf("\n'%d' is an amstrong number",n); 
	else
		printf("\n'%d' is not an amstrong number",n); 
        
    return 0;
}

/*
With regards,
Shivaji Varma
*/
