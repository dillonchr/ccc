#include <stdio.h>

int main(void) {
    char letters[27];
    char sayAh = 'a';
    for(int i = 0; i < 26; i++) {
        letters[i] = i + sayAh;
    }
    printf("Which brings us to:\n");
    for(int i = 0; i < 26; i++) {
        printf("%c", letters[i]);
    }
    printf("\n");
    return 0;
}

