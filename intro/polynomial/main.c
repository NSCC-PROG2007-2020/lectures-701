#include <stdio.h>

int main() {

    double x = 2.55;

    double y = 3.0 * x * x * x - 5.0 * x * x + 6.0;

    // should be 23.231625
    printf("3x3 - 5x2 + 6 = %f\n", y);

    return 0;
}
