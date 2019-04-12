#include <stdio.h>

int main(void) {
    char core;
    printf("Type an uppercase letter: _\b");
    scanf("%c", &core);

    int widest = 5;
    int min = core - widest + 1;
    for (int i = 0; i <= widest; i++) {
        for (int j = i; j < widest; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("%c", min + k);
        }
        printf("\n");
    }

    return 0;
}

