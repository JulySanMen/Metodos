#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int res;
    char pa1 [20];
    char pa2[20];
    printf("Escribe una palabre: ");
    scanf("%s", pa1);
    printf("Escribe la segunda palabra: ");
    scanf("%s", pa2);
    res = strcmp(pa1, pa2);

    if (res>0)
    {
        printf("La palabra 1 es la mayor\n");
        printf("La palabra 2 es la manor\n");
    }else if(res==0){
        printf("Las palabras son iguales\n");
    }else{
        printf("La palabra 1 es la mnoer\n");
        printf("La palabra 2 es la mayor\n");
    }
    

    return 0;
}