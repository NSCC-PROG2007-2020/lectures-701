#include <stdio.h>

int get_new_number() {
    static int num = 0;
    return ++num;
}

int main() {

    for (int i=0; i<10; i++) {
        printf("%i ", get_new_number());
    }
    printf("\n");

    return 0;
}
