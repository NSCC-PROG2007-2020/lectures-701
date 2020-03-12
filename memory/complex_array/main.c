#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(char **dbl_ptr) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%c ", dbl_ptr[i][j]);
        }
    }
}

int main() {

    char strings[][4] = {
        {'a', 'b', 'c', 'd'}, {'e', 'f', 'g', 'h'}, {'i', 'j', 'k', 'l'}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%c ", strings[i][j]);
        }
    }
    printf("\n");

    char *char_ptr;

    char_ptr = (char *)malloc(12 * sizeof(char));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            *(char_ptr + i * 4 + j) = strings[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%c ", *(char_ptr + i * 4 + j));
        }
    }
    printf("\n");

    free(char_ptr);

    char **dbl_ptr;

    dbl_ptr = (char **)malloc(3 * sizeof(char *));

    for (int i = 0; i < 3; i++) {
        char *row_ptr = (char *)malloc(4 * sizeof(char));
        dbl_ptr[i] = row_ptr;

        for (int j = 0; j < 4; j++) {
            dbl_ptr[i][j] = strings[i][j];
        }
    }

    print_array(dbl_ptr);

    for (int i = 0; i < 3; i++) {
        free(dbl_ptr[i]);
    }
    free(dbl_ptr);

    return 0;
}





