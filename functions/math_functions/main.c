#include <stdio.h>

int absolute_value(int num) {
    if (num < 0) {
        num *= -1;
    }
    return num;
}

int main() {

    int num;

    printf("Enter an integer: ");
    scanf("%i", &num);

    printf("The absolute value of %i is %i.\n", num, absolute_value(num));

    return 0;
}
