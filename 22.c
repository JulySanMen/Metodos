#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    int vector[10];

    while (i<10)
    {
        vector[i] = 10;
        printf("%d, ", vector[i]);
        i++;
    }
    
    printf("Fin");
    system("Pause");
    return 0;
}