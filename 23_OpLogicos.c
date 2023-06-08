# include <stdio.h>
#include <stdlib.h>
int main(){
    int P = 1;
    int Q = 0;
    int R = 1;
    int T = 0;
    printf("P & R : %d\n", (P & R ));
    printf("Q o T : %d\n", (Q || T));
    printf("P y Q o R y T : %d\n", ((P & Q) || (R & T)));
    printf("P XOR Q XOR R XOR T : %d\n", (P ^ Q ^ R ^ T));
    printf("NOT Q Y NOT T : %d\n", (!Q & !T));
    printf("NOT NOT NOT P : %d\n", (!!!P));
    system("Pause");
    return 0;
}
