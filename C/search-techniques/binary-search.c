/*
A binary search locates an item in a sorted array by repeatedly dividing the search interval in half. The initial interval includes the entire array. 
If the value of the search key is less than the item in the middle of the interval, then the next interval will be the lower half of the current interval. 
If the value of the search key is greater than the middle item, then the next interval will be the upper half. 
The search process repeats until the item is found or the search interval is empty. 
Binary Search is an O(log n) algorithm, which is more efficient than a linear search for large arrays.
*/

#include <stdio.h>

int binarySearch(int arr[],int arrSize,int search){
   
   int low = 0, high = arrSize-1,pos = -1;
    
	while(low<=high){
         int mid=(low+high)/2;
         if(search==arr[mid]){
             pos = mid;
             break;
         }
         else if(search<arr[mid]){
             high=mid-1;
         }
         else
             low=mid+1;
	}
	
	if(pos != -1)
		return pos;
	else 
		return -1;
}

int main()
{
   int arr[' '],arrSize,search;
    
    printf("Enter size of the array ::");
    scanf("%d",&arrSize);
    
    printf("\nEnter elements of the array in ascending order::\n");
    for(i=0;i<arrSize;i++)
       scanf("%d",&arr[i]);
 
   printf("Enter the number to be searched ::\n");
   scanf("%d",&search);
 
   int c=binarySearch(arr,arrSize,search);
 
   if(c!=-1) printf("%d is present at location %d.\n", search, c+1);
   else printf("%d is not present in array.\n", search); 
 
   return 0;
}

/*
With regrads,
Shivaji Varma
*/
