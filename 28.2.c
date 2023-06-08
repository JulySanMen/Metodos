#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, a;
    int suma=0;
    int i;
    printf("Dame un numero: ");
    scanf("%d", &n);

    for ( i = 1; i <= (n); i++)
    {
        printf("%d + ", i);
        suma = suma + i;
        
    }
    printf(" = %d", suma);

    printf("\nTabla");
    printf("Dame un numero: ");
    scanf("%d", &a);
    printf("A       A+2     A+4     A+6\n");
    for (i = 1; i < (a); i++)
    {
        printf("%d        %d       %d      %d\n", a, a+2, a+4, a+6);
    }
    system("Pause");
    return 0;  
}