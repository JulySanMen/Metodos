#include <stdio.h>
#include <stdlib.h>


int main(){
    int a = 1, aa = 3, b = 3, bb = 5, c = 1, cc = 30, d = 23, dd = 30;
    int pas1 = c * dd, pas2 = cc * d;
    double numerador, denominador;

	double b2 = 2, c2 = 1, d2 = 4;
    double g = b2 - (c2 / d2);
    double h = c2 + (b2 / g);
    double i = b2 * h;

    denominador = aa * bb * pas2;
    numerador = a * bb * pas2 + b * aa * pas2 + pas1 * bb * aa;

    printf("El resultado de la primera operacion es: %f", numerador / denominador);
	printf("\n");

	printf("El resultado de la seguna operacion es: %f", 5 + i);
	printf("\n");

    system("Pause");
    return 0;
}