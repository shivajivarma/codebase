/*

 A string is called palindrome if it symmetric. In other word a string is called palindrome if string remains same if its characters are reversed. 
 For example: asdsa
 If we will reverse it will remain same i.e. asdsa

Example of string palindrome:  a, b, aa, aba, madam, malayalam etc.

*/

import java.io.*;
 
class palindrome{
 
 
 
 void palindrome(String str){
  // Alogorithm for checking whether the given string is palindrome or not
  String reverse=new String();
  
    for(int i=str.length()-1;i>=0;i--){
     System.out.println(reverse+"\n");
     reverse=reverse+str.charAt(i);
    }
  
    if(str.equals(reverse)) System.out.println("Given string is a Palindrome");
    else System.out.println("Not a Palindrome");
  // End of the algorithm 
 }
 
 
 public static void main(String args[]){

  String str=new String(args[0]);
    palindrome(str);
    
 }
 
}

/*
With regards,
Shivaji Varma
*/
