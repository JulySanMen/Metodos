#include <stdio.h>

int main(){
    int arreglo[100];


    for(int i = 0; i < 100; i++){
        arreglo[i] = 100 - i;
    }


    for(int i = 0; i < 100; i++){
        printf("%d ", arreglo[i]);
    }

    return 0;
}