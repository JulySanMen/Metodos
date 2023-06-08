#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palabra[100], invertida[100];
    int longitud, i, j, res;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    longitud = strlen(palabra);

    for (i = 0, j = longitud - 1; i < longitud; i++, j--) {
        invertida[i] = palabra[j];
    }
    invertida[longitud] = '\0';

    res = strcmp(invertida, palabra);

    printf("La palabra %s\n", (res == 0) ? "es palindroma":"no es palindroma");
    return 0;
}