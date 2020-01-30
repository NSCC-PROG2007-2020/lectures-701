#include <stdio.h>

/* Write a program that calculates the sum of the digits of an integer. 
 * For example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13.
 * The program should accept any arbitrary integer typed in by the user.
 */

#define PLACE_HOLDER 10

int main() {

    int num;

    printf("Enter an integer: ");
    scanf("%i", &num);

    int digit = 0;
    int sum = 0;
    while (num > 0) {
        /* adding the digits to sum */
        /* printf("digit=%i, sum=%i, num=%i\n", digit, sum, num); */
        digit = num % PLACE_HOLDER;
        sum += digit;
        num /= PLACE_HOLDER;
        printf("%i ", digit);
    }
    printf(" = %i\n", sum);

    return 0;
}
