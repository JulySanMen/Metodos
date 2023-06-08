#include <stdio.h>

int main(){
    double edad = 20;
    double año = 365;
    double horas = 24;
    double min = 60;
    double seg = 60;

    double segundos = edad*año*horas*min*seg;

    printf("Has vivido %f segundos", segundos);

    printf("\n");
    return 0;
}
