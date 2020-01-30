#include <stdio.h>

/* Write a program to generate and display a table of n and n2, 
 * for integer values of n ranging from 1 to 10.
 * Be certain to print appropriate column headings.
 */

int main() {

    printf("  n    n^2\n");
    printf("-----|-----\n");
    for (int n = 1, square = n * n; n <= 10; n++, square = n * n) {
        printf("%3i  |%4i\n", n, square);
    }

    return 0;
}
