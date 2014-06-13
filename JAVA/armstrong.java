/*

An Armstrong number is a number such that the sum of its digits raised to the third power is equal to the number itself.  
For example, 371 is an Armstrong number, since 3^3 + 7^3 + 1^3 = 371.
Another example, 153. 1^3 + 5^3 + 3^3 = 3 + 15 + 9 = 153.

*/

import java.util.*;

class Common {
	
	public static boolean Armstrong(int number){
		int  sum=0,temp,r;
		temp=number;
		while (temp!=0) {
			r=temp%10;
			sum=sum+(r*r*r);
			temp=temp/10;
		}
		if(number == sum)
			return true;
		else
			return false;

	}
	
	public static void main(String[] args) {
		
		Scanner in= new Scanner(System.in);
		System.out.print("Enter number: ");	
		try{
			int n=in.nextInt();
			if (Armstrong(n))
				System.out.println(n + " is an amstrong number"); 
			else
				System.out.println(n + " is not an amstrong number");
		}
		catch(InputMismatchException e){
			System.out.println("Error: Only interger numbers are accepted");
		}
		finally{
			in.close();
		}
	}
}

/*
With regards,
Shivaji Varma
*/
