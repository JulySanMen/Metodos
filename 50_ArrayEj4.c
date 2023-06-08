#include <stdio.h>

int main() {
    int arr[20] = {5, 6, 2, 8, 1, 3, 9, 7, 4, 2, 6, 8, 3, 5, 1, 7, 9, 4, 2, 3};
    int sum = 0;
    int product = 1;
    for (int i = 0; i < 20; i++) {
        sum += arr[i];
        product *= arr[i];
    }
    float avg = (float) sum / 20;
    printf("El promedio de los elementos es: %.2f\n", avg);
    printf("La multiplicacion de los elementos es: %d\n", product);
    
    return 0;
}
