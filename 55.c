#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int*p,y;

void fun(){
    int x = 40;
    p=&x;
    y=*p;
    *p=23;
}

void main(){
    fun();
    y=*p;
    *p=25;
    printf("El valor de y es %d\n ekl valor de *p es %d\n el valor de p es %d\n", y, *p, p);
}