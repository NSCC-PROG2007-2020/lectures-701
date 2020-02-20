#include <stdio.h>

int num1, num2;

int min_value(int a, int b) {
    num1 = 5;
    /* local 'num1' and 'num2' are not accessible here */
    printf("%i", num1);
    if (a < b) {
        int num1 = a;
        int num2 = b;
        printf("num1=%i, num2=%i\n", num1, num2);
        return num1;
    }
    return b;
}

int main() {

    int num1, num2;

    printf("Enter a number: ");
    scanf("%i", &num1);
    
    printf("Enter a second number: ");
    scanf("%i", &num2);

    printf("The lesser of the two is: %i\n", min_value(num1, num2));

    /* 'a' is not accessible here */
    /* printf("%i", a); */

    return 0;
}
