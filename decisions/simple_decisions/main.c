#include <stdio.h>

int main() {
    
    int a = 2;
    int b = 2;
    int c = 3;

    if (a < b && b < c) {
        printf("%i < %i AND %i < %i\n", a, b, b, c);
    }

    /* ok, if line is short */
    if (a == b) c = 4;

    /* this line is too long though */
    if (a < b && b < c) printf("%i < %i AND %i < %i\n", a, b, b, c);

    /* don't do this either */
    if (a < b) c = 1; printf("==> %i\n", c);

    if (a < b) 
        printf("%i < %i\n", a, b);
    else if (a == b)
        printf("%i = %i\n", a, b);
    else
        printf("%i < %i\n", b, a);
    

    return 0;
}
