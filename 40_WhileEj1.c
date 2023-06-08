#include <stdio.h>
int main() {
    int i = 3;
    while (i < 1000) {
        printf("%d ", i);
        i += 3;
    }
    return 0;
}