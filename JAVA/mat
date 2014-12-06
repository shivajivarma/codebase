import java.io.BufferedReader;
import java.io.InputStreamReader;

class TestClass {
    public static void main(String args[] ) throws Exception {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        
        for (int i = 0; i < N; i++) {	
        	
        	String[] splitStrings = br.readLine().split(" ");
        	int x = Integer.parseInt(splitStrings[0]);
            int y = Integer.parseInt(splitStrings[1]);
            char matrix[][] = new char[x][y];
             
             for (int j = 0; j < x; j++) {
             	
             	String line = br.readLine();
             	for (int k = 0; k < y; k++) {
             		matrix[j][k] = line.charAt(k);
             	}
             	
             }
             System.out.println(count(matrix, x, y));
        }      
    }
    
    public static int count(char matrix[][], int x, int y){
    	int count = 0,l;
    	l = (x < y)? x : y;
    	
    	if(l%2==0){
    		l--;
    	}
    	
    	while(l>1){
	    	for (int i = 0; i < (x - l + 1); i++) {
	    		for (int j = 0; j < (y - l + 1); j++) {
		    		if(validate(matrix, l, i, j)){
		    			count++;
		    		}
	    		}
	    	}
    		l = l - 2;
    	}
    
    	return count;
    }
    
    public static boolean validate(char matrix[][], int len,int x, int y){
    	int a = 0, b = 0;
    	 
    	for (int i = 0; i < len; i++) {
    		
    		if(matrix[x + len/2][y + i] == 'a')
        		a++;
        	else
        		b++;
            
            if(a > 1 && b > 1)
            	return false;
        }
        
        for (int j = 0; j < len; j++) {
        	
        	if(j == len/2){
        		continue;
        	}else if(matrix[x + j][y + len/2] == 'a')
        		a++;
        	else
        		b++;
        
        	if(a>1 && b>1)
            	return false;
        }
        
    	return true;
    }
}
