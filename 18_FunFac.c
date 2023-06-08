#include <stdio.h>
unsigned long long factorial(int n);
int main() {
    int n;
    printf("Ingresa un número: ");
    scanf("%d", &n);
    unsigned long long result = factorial(n);
    printf("El factorial de %d es: %llu\n", n, result);
    
    return 0;
}
unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
