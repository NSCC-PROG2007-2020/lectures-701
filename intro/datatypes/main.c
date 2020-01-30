#include <stdio.h>
#include <stdint.h>
#include <float.h>

int main() {

    /* standard data types */
    int num = 123456;
    float fnum = 3.14159f;
    char ch = 98;

    printf("range: %i to %i, num = %i\n", INT32_MIN, INT32_MAX, num);
    printf("range: %g to %g, fnum = %f\n", -FLT_MAX, FLT_MAX, fnum);
    printf("ch = %c (%i)\n", ch, ch);

    /* special data types */
    unsigned int unum = 123456;
    unsigned short int snum = 32768U;
    long int lnum = 2147483648L;
    unsigned long int ulnum = 2147483648UL;

    printf("range: %u to %u, unum = %u\n", 0, UINT32_MAX, unum);
    printf("range: %u to %u, snum = %hu\n", 0, UINT16_MAX, snum);
    printf("range: %i to %i, lnum = %li\n", INT32_MIN, INT32_MAX, lnum);

    return 0;
}