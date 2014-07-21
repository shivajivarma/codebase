/*
Compute exact value of 1/(2^n) for T cases
*/

import java.util.Scanner;
import java.math.BigInteger;

class OneBy2PowerN {
	
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		
		System.out.print("Enter number of test cases: ");
		int T = in.nextInt(), i,n;
		
		for (i = 0; i < T; i++) {
			System.out.print("\nEnter value of N: ");
			n = in.nextInt();
			System.out.println("1/(2^"+n+") = "+oneBy2PowerN(n));	
		}
	}
	
	static String oneBy2PowerN(int input){
		BigInteger b, five = BigInteger.valueOf(5);
		String output= "0.";
		b = five.pow(input);
		int j, len;
		len = input - b.toString().length();
		
		for (j = 0; j < len; j++)
			output = output + "0";
		
		return output+b;
	}
}
