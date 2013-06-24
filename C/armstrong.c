/*

An Armstrong number is a number such that the sum of its digits raised to the third power is equal to the number itself.  
For example, 371 is an Armstrong number, since 3^3 + 7^3 + 1^3 = 371.
Another example, 153. 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.

*/

#include<stdio.h>

int main()
{
    int n = 0,sum=0,temp,r;
		
		printf("Enter number: ");	
		scanf("%d",&n);
	
		temp=n;
	
		while (temp!=0) {
			r=temp%10;
			sum=sum+(r*r*r);
			temp=temp/10;
		}


		if (n==sum)
			printf("Entered number is amstrong"); 
		else
			printf("Not amstrong");
        
  return 0;
}

/*
With regards,
Shivaji Varma
*/
