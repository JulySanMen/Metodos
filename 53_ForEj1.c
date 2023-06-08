#include <stdio.h>
int main() {
    int A = 3;
    int i, j;
    printf("A\tA+2\tA+4\tA+6\n");
    for (i = 0; i < 4; i++) {
        printf("%d\t", A + i * 3);
        for (j = 1; j <= 3; j++) {
            printf("%d\t", A + i * 3 + j * 2);
        }
        printf("\n");
    }
    return 0;
}
