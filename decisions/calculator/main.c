#include <stdio.h>

/* Write a program that acts as a simple “printing” calculator. 
 * The program should allow the user to type in expressions of the form
 *
 * number   operator
 *
 * The following operators should be recognized by the program:
 *
 * +     -     *     /     S     E
 */

int main() {

    float number;
    char operator;
    float accumulator = 0.0f;

    printf("Begin Calculations\n");
    do {

        scanf("%f %c", &number, &operator);

        switch (operator) {
            case 'S':
                accumulator = number;
                break;
            case '+':
                accumulator += number;
                break;
            case '-':
                accumulator -= number;
                break;
            case '*':
                accumulator *= number;
                break;
            case '/':
                accumulator /= number;
                break;
            case 'E':
                printf("End of program\n");
                break;
            default:
                printf("Unknown operator.\n");
                break;
        }

        printf("= %f\n", accumulator);

    } while (operator != 'E');
    printf("End of Calculations\n");

    return 0;
}






