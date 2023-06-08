#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    int M;
    scanf("%d", &M);
   for ( a = 1; a<=M; a++){
    for ( b = 1; b <=M; b++)
    {
        c=a*b;
        printf("%d \t", c);
    }
      printf("\n");
   }  
    return 0;
}