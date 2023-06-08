#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char pala1 [20];
    char pala2 [20];
    int len,i;

    printf("Ingresa la palabra 1:  ");
    scanf("%s", pala1);
    printf("Ingresa la palabra 2: ");
    scanf("%s", pala2);

    len = strlen(pala1);
    for(i=0; i < len; i++){
        strcat(pala1, pala2);
    }
    printf("%s", pala1);
    return 0;
}