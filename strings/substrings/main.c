#include <stdio.h>
#include <string.h>

#define LOOKUP_TABLE_SIZE 3

#define TRUE 1
#define FALSE 0

const char *lookup_table[LOOKUP_TABLE_SIZE] = {
    "story", "man", "about"
};

int lookup_word(char *word) {

    for (int i=0; i<LOOKUP_TABLE_SIZE; i++) {
        if (strcmp(word, lookup_table[i]) == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

int main() {

    char *data = "This is a story about a man named Jed.";
    char *data_ptr = data;

    char buffer[256];
    char *buff_ptr = buffer;

    for (int i=0; i<strlen(data); i++) {

        printf("%c ", *data_ptr);

        if (*data_ptr == ' ') {
            printf("\n");
            *buff_ptr = '\0';
            printf("word: %s\n", buffer);

            if (lookup_word(buffer)) {
                printf("Found the word!\n");
            }

            buff_ptr = buffer;
        } else {
            *buff_ptr = *data_ptr;
            buff_ptr++;
        }

        data_ptr++;
    }

    return 0;
}
