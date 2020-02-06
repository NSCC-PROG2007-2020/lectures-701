#include <stdio.h>

/* Write a program that asks the user to type in two integer values
 * at the terminal. Test these two numbers to determine if the first 
 * is evenly divisible by the second, and then display an appropriate 
 * message at the terminal.
 */

int main() {

    int num1, num2;

    printf("Enter a dividend: ");
    scanf("%i", &num1);

    printf("Enter a divisor: ");
    scanf("%i", &num2);

    if (num1 % num2 == 0) {
        printf("%i is evenly divisible by %i\n", num1, num2);
    } else {
        printf("%i is NOT evenly divisible by %i\n", num1, num2);
    }

    return 0;
}
