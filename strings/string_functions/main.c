#include <stdio.h>
#include <string.h>

int main() {

    char str1[] = "String 1!";
    char *str2  = "String 2!";
    char str3[] = {'S','t','r','i','n','g', ' ', '3','!','\0'};

    printf("str1=%p, len=%lu, sizeof=%lu\n", str1, strlen(str1), sizeof(str1));
    printf("str2=%p, len=%lu, sizeof=%lu\n", str2, strlen(str2), sizeof(str2));
    printf("str3=%p, len=%lu, sizeof=%lu\n", str3, strlen(str3), sizeof(str3));

    strcpy(str3, str1);

    printf("str1=%s, str3=%s\n", str1, str3);

    char buffer[6];

    strncpy(buffer, str1, 6);
    buffer[5] = '\0';

    printf("str1=%s, buffer=%s, str3=%s\n", str1, buffer, str3);

    return 0;
}
