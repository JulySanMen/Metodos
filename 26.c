#include <stdio.h>
#include <stdlib.h>

int main(){
    int tabla2[100];
    int mul;
    int i = 0;

    while (i<101)
    {
        mul = i*2;
        tabla2[i] = mul;
        printf("2 x %d = %d\n", i, tabla2[i]);
        i++;
    }
    printf("Fin");
    system("Pause");
    return 0;
}