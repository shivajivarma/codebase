/*
Problem statement: To sort set of elements in an array.

Input:
N	// array size.
arr[ ] 	// array
Output: Sorted array.

Eg:
input: 		5	7	6	3	10	2	4	1
output:		1	2	3	4	5	6	7	10
*/

#include<stdio.h>

void insertionSort(int arr[],int arrSize)
{
 int i,j,k;
     // Algorithm for sorting.
      for(i=1;i<arrSize;i++)
       for(j=0;j<i;j++)
          if(arr[j]>arr[i])
          {   
              int temp=arr[i];
             for(k=i;k>j;k--)
               arr[k]=arr[k-1];
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
    
    insertionSort(&arr,arrSize); 
         
    printf("\nSorted array::");
    for(i=0;i<arrSize;i++)
        printf("  %d",arr[i]);
        
  return 0;
}

/*
With regards,
Shivaji Varma
*/