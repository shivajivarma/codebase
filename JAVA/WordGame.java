/* * 
   * ClassName : WordGame
      Reads a Character from User,Checks its occurence. Points are rewarded for correct guess and penalty for wrong one.        
   */
   
import java.io.*;
import java.util.Scanner;

class WordGame
{

    public static void main(String[] abc)
    {        
        final String mast="UNIVERSAL";
        int count=3,point=100;    
        String ch;
        char choice=' ';
        
        Scanner myscan=new Scanner(System.in);        

        System.out.println("                Welcome to Word Game             ");
        System.out.println("                --------------------            ");

        //Loop for reading charcters from user and checks it. 3 wrong guess are allowed
        do
        {
            if(count > 0 && point > 0)
            {

                System.out.println("Try your Luck by Guessing a Character -- You Have   : " + count);
                ch=myscan.next();
                
                //Checking occurence
                if(mast.contains(ch))
                {
                    System.out.println(" Correct you are Rewarded 10 Points ");
                    point+=10;
                }
                else
                {
                    point-=10;
                    System.out.println("\n Incorrect you loose 10 Points\n");
                    count--;
                }

            }
            else
            {
                System.out.println("  Oops...Game Over!!!!!!!!1 /n You have " +point+ "Points");
                System.exit(0);
            }

            System.out.println("\n Do you Want to continue...........Y Or N");
        
            try {
                choice=(char)System.in.read();
            } catch (IOException e) {
                               e.printStackTrace();
            }

        }while(choice != 'N');

        if(choice == 'N')
        {
            System.out.println(" \n"+ point + "Points");
            System.exit(0);
        }            
    }            

}
