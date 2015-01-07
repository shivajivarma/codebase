#include<stdio.h>

void bubbleSort(int arr[],int arrSize)
{
    int i,j;
    // Algorithm for sorting.
    for(j=arrSize-1; j>0; j--)
        for(i=0; i<j; i++)
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
    //End of algorithm.
}

int main()
{
    int arr[' '],arrSize,i;

    printf("Enter size of the array :: ");
    scanf("%d",&arrSize);

    printf("\nEnter elements of the array ::\n");
    for(i=0; i<arrSize; i++)
        scanf("%d",&arr[i]);

    bubbleSort(&arr,arrSize);

    printf("\nSorted array ::");
    for(i=0; i<arrSize; i++)
        printf(" %d",arr[i]);

    return 0;
}