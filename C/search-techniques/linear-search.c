/*

Linear search, also known as sequential search, 
is a process that checks every element in the list sequentially until the desired element is found. 

*/
#include <stdio.h>

int linearSearch(int arr[],int arrSize,int search){
   int c;
   for ( c = 0 ; c < arrSize ; c++ )
   {
      if ( arr[c] == search )     /* if required element found */
      {
         return c;
   break;
      }
   }
   if ( c == arrSize )
          return -1;
}

int main()
{
   int arr[' '],arrSize,search,i;
    
    printf("Enter size of the array ::");
    scanf("%d",&arrSize);
    
    printf("\nEnter elements of the array ::\n");
    for(i=0;i<arrSize;i++)
       scanf("%d",&arr[i]);
 
   printf("Enter the number to be searched ::\n");
   scanf("%d",&search);
 
   int c=linearSearch(arr,arrSize,search);
 
   if(c!=-1) printf("%d is present at location %d.\n", search, c+1);
   else printf("%d is not present in array.\n", search); 
 
   return 0;
}

/*
With regrads,
Shivaji Varma
*/
