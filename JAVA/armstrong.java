/*

An Armstrong number is a number such that the sum of its digits raised to the third power is equal to the number itself.  
For example, 371 is an Armstrong number, since 3^3 + 7^3 + 1^3 = 371.
Another example, 153. 1^3 + 5^3 + 3^3 = 3 + 15 + 9 = 153.

*/

import java.util.*;

class armstrong {
	public static void main(String[] args) {
		
		int n = 0,sum=0,temp,r;
		Scanner in= new Scanner(System.in);
		System.out.println("Enter number");	
		n=in.nextInt();
	
		temp=n;
	
		while (temp!=0) {
			r=temp%10;
			sum=sum+(r*r*r);
			temp=temp/10;
		}


		if (n==sum)
			System.out.println("Entered number is amstrong"); 
		else
			System.out.println("Not amstrong");
	}
}

/*
With regards,
Shivaji Varma
*/