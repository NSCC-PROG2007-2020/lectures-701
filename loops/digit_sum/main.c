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

    /* determine the largest place holder */
    int largest_place_holder = 1;
    for (int n = num / 10; n > 0; n /= 10) {
        largest_place_holder *= 10;
    }

    int digit = 0;
    int sum = 0;
    for (int place_holder = largest_place_holder;
            place_holder > 0; place_holder /= 10) {
        digit = num / place_holder;
        sum += digit;
        num -= digit * place_holder;
        printf("%i ", digit);
    }
    printf(" = %i\n", sum);

    return 0;
}
