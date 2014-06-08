/*
Print matrix after transitions.
A - Anti clock rotation.
C - Clock rotation.
T - Diagonal rotation. NE to SW
\ - Diagonal rotation. NE to SW
/ - Diagonal rotation. NW to SE
*/

import java.util.ArrayList;
import java.util.Scanner;

class MatrixTransform{
	ArrayList<ArrayList<String>> data = new ArrayList<ArrayList<String>>();	
 public static void main(String args[]) {
	 Scanner in = new Scanner(System.in);
	 MatrixTransform m = new MatrixTransform();
	 int T = Integer.parseInt(in.nextLine()),i,j;	 	 
	 for(i=0;i<T;i++){
		 ArrayList<String> row = new ArrayList<String>();
		 String[] strrow = in.nextLine().split(",");
		 for(j=0;j<T;j++)
			 row.add(strrow[j]);
		 m.data.add(row);
	 }
	 String actions = in.next();
	 actions = m.reduce(actions);
	 int l = actions.length();
	 for(i=0;i<l;i++)
		 if(actions.charAt(i) == 'T') m.T();
		 else if(actions.charAt(i) == 'A') m.A();
	 m.printMatrix();
 } 
 void printMatrix(){
	 for (ArrayList<String> row : this.data){
		 boolean flag = false;
		 for(String num:row){
			 if(!flag){
				 System.out.print(num);
				 flag=true;
			 }
			 else System.out.print(","+num);
		 }
	 System.out.println();
	 }
 }
 void A(){
	 ArrayList<ArrayList<String>> matrixDataResult = new ArrayList<ArrayList<String>>();
	 int len = this.data.size();
	 for(int i=len-1;i>=0;i--){
		 ArrayList<String> row = new ArrayList<String>();
		 for(int j=0;j<len;j++) row.add(this.data.get(j).get(i));
		 matrixDataResult.add(row);
	 }
	 this.data = matrixDataResult;
 }
 
 void T(){
	 ArrayList<ArrayList<String>> matrixDataResult = new ArrayList<ArrayList<String>>();
	 int len = this.data.size();
	 for(int i=0;i<len;i++){
		 ArrayList<String> row = new ArrayList<String>();
		 for(int j=0;j<len;j++) row.add(this.data.get(j).get(i));
		 matrixDataResult.add(row);
	 }
	 this.data = matrixDataResult;
 }
 
 String reduce(String line){
	  line = line.replace('\\', 'T');
	  line = line.replaceAll("C", "AAA");
	  line = line.replaceAll("/", "TAA");
    for(int i=0;i<line.length()-1;i++){
    	if(line.charAt(i) == 'T'){
    		if(line.charAt(i+1) == 'T'){
    			line = line.substring(0,i)+line.substring(i+2);
    			i = i-2;
    		}
    	}
    	else if(line.length() >= i+4 && line.charAt(i) == 'A'){
    		if(line.charAt(i+1) == 'A'){
    			if(line.charAt(i+2) == 'A')
    				if(line.charAt(i+3) == 'A'){
    					line = line.substring(0,i)+line.substring(i+4);
    					i = i-4;
    				}
    		}
    	}
    	if(i<0) i=-1;
    }
  return line; 
 }
}
