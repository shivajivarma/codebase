/*

 A string is called palindrome if it symmetric. In other word a string is called palindrome if string remains same if its characters are reversed. 
 For example: asdsa
 If we will reverse it will remain same i.e. asdsa

Example of string palindrome:  a, b, aa, aba, madam, malayalam etc.

*/

import java.util.Scanner;

class Common{
  
 public static boolean palindrome(String str){
  // Algorithm for checking whether the given string is palindrome or not
  String reverse=new String();
  
    for(int i=str.length()-1;i>=0;i--){
     reverse=reverse+str.charAt(i);
    }
  
    if(str.equals(reverse))
    	return true;
    else
    	return false;
  // End of the algorithm 
 }
 
 public static void main(String args[]){
	Scanner in= new Scanner(System.in);
		System.out.print("Enter a string: ");	
		String str=in.nextLine();
			if (palindrome(str))
				System.out.println("'"+str+"' is a Palindrome");
			else
				System.out.println("'"+str+"' is not a Palindrome");
	in.close();	
 }
 
}

/*
With regards,
Shivaji Varma
*/
