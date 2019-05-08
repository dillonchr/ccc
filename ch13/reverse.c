#include <stdio.h>
#include <stdlib.h>
#define CTRL_Z '\032'
#define SLEN 81

int main(void) {
    char file[SLEN];
    puts("Enter the name of the file to be processed:");
    scanf("%80s", file);

    FILE *fp;
    if (!(fp = fopen(file, "r"))) {
        fprintf(stderr, "can't open %s\n", file);
        exit(EXIT_FAILURE);
    }

    fseek(fp, 0L, SEEK_END);
    long last = ftell(fp);
    for (long count = 1L; count <= last; count++) {
        fseek(fp, -count, SEEK_END);
        char ch = getc(fp);
        if (ch != CTRL_Z && ch != '\r') {
            putchar(ch);
        }
    }
    putchar('\n');
    fclose(fp);

    exit(EXIT_SUCCESS);
}

