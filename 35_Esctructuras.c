#include <stdio.h>
#include <stdlib.h>
int main(){
    int HST, PH, salario;
    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &HST);
    printf("\n");
    printf("Ingrese el precio por hora: ");
    scanf("%d", &PH);
    if (HST <= 40){
        salario = HST * PH;
        printf("Su salario semanal es: %d \n", salario);
    }else{
        salario = (40*PH + (PH * 1.5 * (HST-40)));
        printf("Su salario semanal es: %d \n", salario);
    }
    printf("Fin del programa \n");
    return 0;
}
