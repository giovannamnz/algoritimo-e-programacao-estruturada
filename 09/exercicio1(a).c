#include <stdio.h>
 
int main() {

    // declaration of vector A
    int A[6];

    // vector value declaration
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    // printing vector values
    for(int i = 0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}
