#include <stdio.h>

int main() {

    for (int i = 0; i < 10; ++i ) {
        printf("%i ", i);
    }
    printf("\n");

    int j = 0;
    while (j < 10) {
        printf("%i ", ++j);
    }

    return 0;
}
