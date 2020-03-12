#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int nums[] = {1, 2, 3, 4, 5};

    int *num_ptr;

    num_ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < sizeof(nums)/sizeof(int); i++) {
        num_ptr[i] = nums[i];
    }

    for (int i = 0; i < sizeof(nums)/sizeof(int); i++) {
        printf("%i ", num_ptr[i]);
    }
    printf("\n");

    free(num_ptr);

    /* char str[] = {'h','e','l','l','o','\0'}; */
    char *str = "Hello World!";

    char *char_ptr;

    char_ptr = (char *)malloc(strlen(str)+1);

    /*
    for (int i = 0; i < strlen(str) + 1; i++) {
        char_ptr[i] = str[i];
    }
    */
    strcpy(char_ptr, str);

    printf("char_ptr = %s\n", char_ptr);

    free(char_ptr);

    return 0;
}







