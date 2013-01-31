#include<stdio.h>

void swap(int *m,int *n)
{
 int temp=*m;
     *m=*n;
     *n=temp;
}

int partition(int *a,int lower,int upper)
{
  int key,i,j;
  i=lower+1;
  j=upper;
  key=a[lower];
  
   while(1)
  {
      while(a[i]<=key) i++;
      while(a[j]>key) j--;
       if(j>i) swap(&a[i],&a[j]);
       else { swap(&a[lower],&a[j]); break;}
       
   }
   return j;
}
 
void quickSort(int *arr,int lower,int upper)
{
   int i=0;
   if(upper>lower)
   {
        i=partition(arr,lower,upper);
        quickSort(arr,lower,i-1);
        quickSort(arr,i+1,upper);
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
    
    quickSort(arr,0,arrSize-1);
         
    printf("\nSorted array:: ");
    for(i=0;i<arrSize;i++)
        printf("  %d",arr[i]);
        
  return 0;
}

/*
With regards,
Shivaji Varma
*/