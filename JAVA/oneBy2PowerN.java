/*
Compute exact value of 1/(2^n) for T cases
*/

import java.util.Scanner;
import java.math.BigInteger;

class oneBy2PowerN{
    public static void main(String args[]) {
		 Scanner in = new Scanner(System.in);
		 int T = in.nextInt(),len,num,i,j;
		 BigInteger b,five = BigInteger.valueOf(5);
		 String output;
		 for(i=0;i<T;i++){
			 num = in.nextInt();
			 b = five.pow(num);
			 len = num - b.toString().length();
			 output="0.";
			 for(j=0;j<len;j++)
			 output = output + "0";
			 System.out.println(output+b);
		 }
	  }
}
