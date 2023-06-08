#include <stdio.h>
#include <stdlib.h>

int maximo(int a, int b);

int main(){
    int a, b;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    printf("El numero mayor es: %d\n", maximo(a, b));

    return 0;
}

int maximo(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}