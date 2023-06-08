#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char Palabra_1[10];
    char Palabra_2[10];
    char Inter[10];

    printf("Ingrese la palabra 1: \n");
    scanf("%s", Palabra_1);
    printf("Ingrese la palabra 2: \n");
    scanf("%s", Palabra_2);

    printf("----Antes----\n");
    printf("Palabra 1: %s\n", Palabra_1);
    printf("Palabra 2: %s\n", Palabra_2);

    strcpy(Inter, Palabra_2);
    strcpy(Palabra_2, Palabra_1);
    strcpy(Palabra_1, Inter);
    printf("----Despues----\n");
    printf("Palabra 1: %s\n", Palabra_1);
    printf("Palabra 2: %s\n", Palabra_2);

    return 0;
}