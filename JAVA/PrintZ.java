/*

Given 'n', print the symbol 'Z' spanning n rows using '*' symbol. Value of n>2 and n<=20.

Example:
1) Input : n=3
Output:
***
 *
***

2) Input n=4
Output:
****
  *
 *
****

*/
import java.io.BufferedReader;
import java.io.InputStreamReader;

class PrintZ {
    public static void main(String args[] ) throws Exception {
        

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        int N = Integer.parseInt(line);
        for (int i = 0; i < N; i++) {
            System.out.print("*");
        }
        System.out.print("\n");
        for (int i = 0; i < N-2; i++) {
            for (int j = 0; j < N-i-2; j++) {
            	System.out.print(" ");
            }
            System.out.print("*\n");
        }
        for (int i = 0; i < N; i++) {
            System.out.print("*");
        }
    }
}
