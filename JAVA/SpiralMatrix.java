/*
Printing matrix of numbers in spiral form.

Eg: Input: 5

output:
1	16	15	14	13	
2	17	24	23	12	
3	18	25	22	11	
4	19	20	21	10	
5	6	7	8	9	

*/

package shivaji;

import java.util.Scanner;


class SpiralMatrix {
    public static void main(String args[] ) throws Exception {
      	    
      	    System.out.println("Enter N*N Matrix size:");
	    int N = new Scanner(System.in).nextInt();
	     
	    int current = 1;
		// Start in the corner
		int x = 0, y = 0, dx = 1, dy = 0;
		int spiral[][]= new int[N][N];
		
		while (current <= N*N) {
		    // Go in a straight line
		    spiral[x][y] = current++;
		    int nx = x + dx, ny = y + dy;
		   
		    // When you hit the edge...
		    if (nx < 0 || nx == N || ny < 0 || ny == N || spiral[nx][ny] != 0) {
		        // ...turn right
		        int t = dy;
		        dy = dx;
		        dx = -t;
		    }
		    x += dx;
		    y += dy;
		}
		
		for (int i = 0; i < N; i++) {
	    	for (int j = 0; j < N; j++) {
	        	System.out.print(spiral[i][j]+"\t");
	    	}
	    	System.out.print("\n"); 
	    }
   }
}
