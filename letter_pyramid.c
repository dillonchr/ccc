#include <stdio.h>

int main(void) {
    int length = 5;
    char min = 'A';
    char max = min + length;
    for (int i = 0; i <= length; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", length - j + min);
        }
        printf("\n");
    }
    return 0;
}

