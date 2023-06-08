#include <stdio.h>
#include <stdlib.h>

int main(){
    int años, sueldo, x;
    printf("Ingrese los numeros de años que ha trabajado: ");
    scanf("%d", &años);
    printf("\n");
    printf("Ingrese el sueldo: ");
    scanf("%d", &sueldo);
    printf("\n");
    x = (sueldo*100)/10;

    if (años>= 5){
        if (x>1000){
            printf("Felicidades esta sujeto a un credito hipotecario\n");
        }
    }
    printf("Fin del programa\n");
    system("Pause");
    return 0;
}