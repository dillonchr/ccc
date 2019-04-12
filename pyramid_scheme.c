#include <stdio.h>

int main(void) {
    char stamp = '$';
    for (int i = 0; i <= 5; i++) {
        int j = i;
        while(j--) {
            printf("%c", stamp);
        }
        printf("\n");
    }
    return 0;
}

