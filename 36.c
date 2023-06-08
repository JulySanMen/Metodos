#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int len;
    int i, j;
    char cad[10];
    printf("Ingresa una cadena: ");
    scanf("%s", cad);
    printf("\n");
    len = strlen(cad);

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            printf("*\t");
        }
        printf("\n \n \n \n");
    }

    return 0;
}