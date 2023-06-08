#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palabra[100];
    int cont[26]={0};
    printf("Ingresa una cadena: ");
    scanf("%s", palabra);
    int con;
    con = strlen(palabra);

    for(int i = 0; i < con; i++){
        cont[palabra[i] - 'a']++;
    }   

    printf("\n");

    for (int i = 0; i < 26; i++)
    {
        if(cont[i]>0){
            printf("%c: %d\n", i + 'a', cont[i]);
        }
    }
    
    
    return 0;
}