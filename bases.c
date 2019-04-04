#include <stdio.h>

int main(void) {
    int x;
    printf("What number you got? ");
    scanf("%d", &x);
    printf("dec = %d\noctal = %#o\nhex = %#x\n", x, x, x);
    return 0;
}

