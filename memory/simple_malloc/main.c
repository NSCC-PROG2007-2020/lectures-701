#include <stdio.h>
#include <stdlib.h>

int main() {

    int *num_ptr;

    num_ptr = (int *)malloc(sizeof(int));

    if (num_ptr != NULL) {

        *num_ptr = 12345;

        printf("num = %i\n", *num_ptr);

        free(num_ptr);
    }

    return 0;
}
