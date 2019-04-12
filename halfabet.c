#include <stdio.h>

int main(void) {
    char min = 'A';
    int rows = 6;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", min++);
        }
        printf("\n");
    }
    return 0;
}

