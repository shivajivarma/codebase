/*
Problem statement: To print all permutation of given set of letters

Input:

N	// array size.

arr[ ] 	// array.

Output: permutations of letters.

Eg:

input: 		a	b	c

output:	

a	b	c

a	c	b

b	a	c

b	c	a

c	b	a

c	a	b


*/

#include<stdio.h>

void swap(char *m,char *n)
{
 char temp=*m;
     *m=*n;
     *n=temp;
}

void permutations(char *arr,int k,int n)
{
 int i,j,temp;
		 
   if(k==n-1){
		for(i=0;i<n;i++)
		 printf("%c ",arr[i]);
		 printf("\n");
   }
   else
   for(i=k;i<n;i++)
   {
    swap(&arr[k],&arr[i]);
    permutations(arr,k+1,n);
    swap(&arr[k],&arr[i]);
   }
}

int main()
{
 char arr[20];
 int arrSize,i;

  printf("ENTER SIZE OF THE ARRAY:\n");
  scanf("%d",&arrSize);
  
  printf("\nENTER ELEMENTS INTO THE ARRAY:\n");
  for(i=0;i<arrSize;i++)
     {
      scanf("%c",&arr[i]);
      
      // skip the input if its space, tab or new line character.
      if(arr[i]=='\n'||arr[i]=='\t'||arr[i]==' ') i--; 
     }
  
  printf("\nPermutations:\n");
  permutations(arr,0,arrSize);
  return 0;
}

/*
With regards,
Shivaji Varma
*/