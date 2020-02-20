#include <stdio.h>

void add_one_to_array(int nums[], int len) {
    for (int i=0; i<len; i++) {
        nums[i]++;
    }
}

void print_two_dimensions(int nums[][5], int rows, int cols) {
    for (int r=0; r<rows; r++) {
        for (int c=0; c<cols; c++) {
            printf("%i ", nums[r][c]);
        }
    }
    printf("\n");
}

void print_one_dimension(int *nums, int len) {
    for (int c=0; c<len; c++) {
        printf("%i ", nums[c]);
    }
}

int main() {

    int nums[] = {1, 2, 3, 4, 5};
    int len = sizeof(nums)/sizeof(int);

    add_one_to_array(nums, len);

    for (int i=0; i<len; i++) {
        printf("%i ", nums[i]);
    }
    printf("\n");

    int nums2d[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };
    int nums2d_2[10] = {
            1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    };

    print_two_dimensions(nums2d, 2, 5);

    print_one_dimension(nums2d_2, sizeof(nums2d_2)/sizeof(int));

    return 0;
}



