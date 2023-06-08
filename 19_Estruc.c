#include <stdio.h>
#include <stdlib.h>
struct CD {
    char titulo[100];
    char artista[50];
};
int main(void) {
    struct CD cd1;
    printf("Ingresa el título: ");
    gets(cd1.titulo);
    printf("El título ingresado es: %s\n", cd1.titulo);
    system("Pause");
    return 0;
}
