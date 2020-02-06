#include <stdio.h>

#define NUMBER_SIZE 10

int main() {

    int numbers[NUMBER_SIZE];

    for (int i=0; i<NUMBER_SIZE; i++) {
        numbers[i] = i + 1;
    }

    for (int i=0; i<NUMBER_SIZE; i++) {
        printf("%i ", numbers[i]);
    }
    printf("\n");

    char chars[NUMBER_SIZE];

    for (int i=0; i<NUMBER_SIZE; i++) {
        chars[i] = i + 'a';
    }

    for (int i=0; i<NUMBER_SIZE; i++) {
        printf("%c ", chars[i]);
    }
    printf("\n");

    /* multi-dimension array */

    int multi[2][5];

    for (int i = 0; i < 2; i++ ) {
        for (int j = 0; j < 5; j++) {
            multi[i][j] = i * j;
        }
    }

    printf("multi[1][1] = %i\n", multi[1][1]);

    /* declare and initialize */
    int declared[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < sizeof(declared)/sizeof(int); i++) {
        printf("%i ", declared[i]);
    }
    printf("\n");

    return 0;
}
