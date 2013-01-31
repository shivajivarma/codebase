#include<stdio.h>
void towhan(int n,char x,char y,char z)
{
   if(n>=1)
   {  
      towhan(n-1,x,z,y);
      printf("\nMOVE TOP DISK FROM TOWER '%c' TO TOP OF TOWER '%c' \n",x,y);
      towhan(n-1,z,y,x);
    }
}
 
 
int main()
{
     int n;
     printf("ENTER THE NUMBER OF DISKS");
     scanf("%d",&n);
     towhan(n,'A','B','C');
     getch();
     return 0;
}

/*
With regards,
Shivaji Varma
*/