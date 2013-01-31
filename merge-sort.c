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

void merge(int arr[],int low,int mid,int high)
{

 int i,j,k,l,b[20];
 l=low;
 i=low;
 j=mid+1;

 while((i<=mid)&&(j<=high))
 {
    if(arr[i]<=arr[j]){
         b[l]=arr[i];
         i++;
    }
    else{
         b[l]=arr[j];
         j++;
    }
    l++;
 }

 if(i>mid)
    for(k=j;k<=high;k++)
    {
	   b[l]=arr[k];
	   l++;
    }
 else
    for(k=i;k<=mid;k++)
    {
	   b[l]=arr[k];
	   l++;
    }

 for(k=low;k<=high;k++)
     arr[k]=b[k];
}



void mergeSort(int *arr,int low,int high)
{
 int mid;

 if(low<high)
   {
    mid=(low+high)/2;

    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);

    merge(arr,low,mid,high);
   }
}


int main()
{
    int arr[' '],arrSize,i;
    
    printf("Enter size of the array :: ");
    scanf("%d",&arrSize);
    
    printf("\nEnter elements into the array ::\n");
    for(i=0;i<arrSize;i++)
       scanf("%d",&arr[i]);
    
    mergeSort(arr,0,arrSize-1); 
         
    printf("\nSorted array::");
    for(i=0;i<arrSize;i++)
        printf("  %d",arr[i]);
    
  return 0;
}

/*
With regards,
Shivaji Varma
*/