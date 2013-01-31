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