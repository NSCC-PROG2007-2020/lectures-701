#include <stdio.h>

/* a program to generate the value of a triangular number */ 

int main() {

    int triangular_number = 0;

    for (int i = 1; i <= 5; i++) {
        printf("i = %i\n", i);
        triangular_number += i;
    }

    printf("The fifth triangular number is %i\n", triangular_number);

    return 0;
}
