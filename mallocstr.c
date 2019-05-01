#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *str = (char *)malloc(sizeof(char) * 7);
    for (int i = 0; i < 6; i++) {
        str[i] = 99 + i;
    }
    str[6] = '\0';
    puts(str);
    free(str);
    return 0;
}

