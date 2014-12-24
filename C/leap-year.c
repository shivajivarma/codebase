/* 

Program to check whether a year is leap year or not, using if else statement.

*/

#include <stdio.h>

int isLeapYear(int year){
    
    if(year%4 == 0){
        if( year%100 == 0){ /* Checking for a century year */
            if ( year%400 == 0)
                return 1;
            else
                return 0;
        }else
            return 1;
    }else
        return 0;
        
}

int main(){
  
  int year;
  printf("Enter a year: ");
  scanf("%d",&year);
  
  if(isLeapYear(year) == 1){
      printf("%d is a leap year.", year);
  }else{
       printf("%d is not a leap year.", year);
  }
  
  return 0;
  
}
