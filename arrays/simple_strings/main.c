#include <stdio.h>
#include <string.h>

int main() {

    char string[] = "Hello World!\n";

    for (int i = 0; i < strlen(string); i++) {
        printf("%c ", string[i]);
    }

    printf("%s\n", string);

    char buffer[32];

    printf("Enter a string: ");
    scanf("%[^\n]", buffer);

    printf("You entered: %s\n", buffer);

    char ch_str[] = {'H','e','l','l','o',0x20,'A','g','a','i','n','\0'};

    printf("%s\n", ch_str);

    return 0;
}
