#include <stdio.h>

int main() {
    int A[] = {3, 5, 6, 8, 4, 7, 8, 5, 3, 1};
    int B[] = {3, 4, 6, 8, 9, 1, 2, 3, 0, 9};
    
    // A[3] mod (B[2]/2)
    int result1 = A[3] % (B[2]/2);
    printf("A[3] mod (B[2]/2) = %d\n", result1);
    
    // B[A[1]] - A[9]
    int result2 = B[A[1]] - A[9];
    printf("B[A[1]] - A[9] = %d\n", result2);
    
    // A[0] + A[1+2]
    int result3 = A[0] + A[1+2];
    printf("A[0] + A[1+2] = %d\n", result3);
    
    // A[5] + B[5]
    int result4 = A[5] + B[5];
    printf("A[5] + B[5] = %d\n", result4);
    
    // (A[3]/B[2])/2
    float result5 = (float) A[3] / B[2] / 2;
    printf("(A[3]/B[2])/2 = %.2f\n", result5);
    
    return 0;
}