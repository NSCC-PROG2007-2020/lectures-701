#include <stdio.h>

int main() {

    float celsius;
    float fahrenheit;

    fahrenheit = 212.0f;
    celsius = (fahrenheit - 32.0f) / 1.8f;

    printf("%.2fF = %.2fC\n", fahrenheit, celsius);

    return 0;
}