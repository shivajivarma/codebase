
class TestClass {
    public static void main(String args[] ) throws Exception {
      
      int N = 1000;
     
        int current = 1;
		// Start in the corner
		int x = 0, y = 0, dx = 1, dy = 0;
		int spiral[][]= new int[N][N];
		while (current <= N*N) {
		    // Go in a straight line
		    spiral[x][y] = N*N - (current++) + 2;
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
		spiral[0][0] = 1;
		
		for (int i = 0; i < N; i++) {
        	for (int j = 0; j < N; j++) {
            	System.out.print(spiral[j][i]+" ");
        	}
        	System.out.print("\n"); 
        }
       
    }
}
