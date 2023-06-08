#include <stdio.h>
#include <stdlib.h>
int main(){
    int cal;
    printf("Ingrese la calificacion : ");
    scanf("%d", &cal);
    if (cal >= 8){
        printf("FELICIDADES APROBASTE EL CURSO\n");
    }
    printf("Fin del programa\n");
    system("Pause");
    return 0;
}
