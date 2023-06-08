#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inversa(char c[100], int len);
int main(){
    char pala[100];
    int longitud;
    printf("Ingrese la palabra: ");
    scanf("%s", pala);
    char* cadena_invertida = inversa(pala, strlen(pala));
    printf("La palabra inversa: %s\n", cadena_invertida);
}
char* inversa(char c[100], int len){
    char invertida[100];
    int i, j;
    for (i = 0, j = len - 1; i < len; i++, j--) {
        invertida[i] = c[j];
    }
    invertida[len] = '\0';
    return invertida;
}