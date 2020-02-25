#include <stdio.h>

int add_one(int *ptr) {
    *ptr += 1;
}

int add_one_to_ptr(int **ptr) {
    *ptr += 1;
}

int main() {

    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int num4 = 4;
    int *ptr = &num3;
    int **dbl_ptr = &ptr;

    add_one(ptr);
    add_one(&num2);

    add_one_to_ptr(dbl_ptr);
    add_one_to_ptr(&ptr);

    printf("num1 = %i\n", num1);
    printf("num2 = %i\n", num2);
    printf("&num1 = %p\n", &num1);
    printf("&num2 = %p\n", &num2);
    printf("&num3 = %p\n", &num3);
    printf("&num4 = %p\n", &num4);
    printf("ptr = %p\n", ptr);
    printf("*ptr = %i\n", *ptr);
    printf("dbl_ptr = %p\n", dbl_ptr);
    printf("*dbl_ptr = %p\n", *dbl_ptr);

    return 0;
}
