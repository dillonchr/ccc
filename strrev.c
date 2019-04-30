#include <stdio.h>
#include <string.h>
#include "get_input.h"

int main(void) {
    char *str = get_string();
    int i = strlen(str);
    int len = i;
    char rev[i+1];
    rev[i] = '\0';
    //  now flip it and reverse it
    while (i--) {
        rev[len - i] = str[i];
    }
    puts(rev);

    return 0;
}

