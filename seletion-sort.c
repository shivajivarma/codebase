/*
Problem statement: To sort set of elements in an array.

Input:
N // array size.
arr[ ] 	// array
Output: Sorted array.

Eg:
input: 		5	7	6	3	10	2	4	1
output:		1	2	3	4	5	6	7	10
*/

#include<stdio.h>

void selectionSort(int arr[],int arrSize)
{
 int i,j,k;
     // Algorithm for sorting.
     for(i=0;i<=arrSize-2;i++)
      for(j=i+1;j<=arrSize-1;j++)
        if(arr[i]>arr[j])
        {
          int temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
        }
       //End of algorithm.
}

int main()
{
    int arr[' '],arrSize,i;
    
    printf("Enter size of the array :: ");
    scanf("%d",&arrSize);
    
    printf("\nEnter elements into the array ::\n");
    for(i=0;i<arrSize;i++)
       scanf("%d",&arr[i]);
    
    selectionSort(&arr,arrSize); 
         
    printf("\nSorted array::");
    for(i=0;i<arrSize;i++)
        printf("  %d",arr[i]);
        
  return 0;
}

/*
With regards,
Shivaji Varma
*/
