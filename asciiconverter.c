#include <stdio.h>

int main(void) {
    int code;
    printf("Gimme an ascii code: ");
    scanf("%d", &code);
    printf("That comes to %c when we read it from ascii lookup\n", code);
    return 0;
}

