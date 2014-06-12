#include <stdio.h>
#include <stdlib.h>
 
int main() {

    
  char a[6]="aklbc",b[6]="bcakk";
  int i,j,anagram=1;
  
  if(strlen(a)==strlen(b))
  for(i=0;i<strlen(a);i++){
      int flag=1;
      for(j=0;j<strlen(b);j++){
           if(a[i]==b[j]){
            flag=0;
            memmove( &a[ 0 ] , &a[ 1 ], strlen( a ));
            i--;
            memmove( &b[ j ] , &b[ j + 1 ], strlen( b ) - j);
            break;
           }
        }
        if(flag == 1){
            anagram=0;
            break;
        }
  }
  else anagram=0;
  
  if(anagram == 1)
   printf("anagram");
   else printf("not an anagram");

  return 0;
}
