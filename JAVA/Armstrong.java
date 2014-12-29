import java.util.*;

class Armstrong {
	
	public static boolean isArmstrong(int number){
		int  sum=0, temp = number, digit;
		
		while (temp!=0) {
			digit = temp % 10;
			sum = sum +(digit * digit * digit);
			temp = temp / 10;
		}
		if(number == sum)
			return true;
		return false;
	}
	
	public static void main(String[] args) {
		
		Scanner in= new Scanner(System.in);
		System.out.print("Enter number: ");
		
		try{
			int n=in.nextInt();
			if (isArmstrong(n))
				System.out.println(n + " is an amstrong number"); 
			else
				System.out.println(n + " is not an amstrong number");
		}
		catch(InputMismatchException e){
			System.out.println("Error: Only interger numbers are accepted");
		}
		finally{
			in.close();
		}
	}
}
