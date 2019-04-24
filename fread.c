#include <stdio.h>

int main(void) {
    FILE * f;
    int v;

    f = fopen("/home/palooka/pers/ccc/demo.txt", "rb");
    if (f) {
        fseek(f, 1, SEEK_CUR);
        while (1) {
            v = fgetc(f);
            if (v == EOF) {
                break;
            } else {
                printf("%c", v);
            }
        }
        fclose(f);
    } else {
        printf("I don't know but I been told. No file bud.\n");
        return 1;
    }
    return 0;
}

