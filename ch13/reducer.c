#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("We expected you to do something with this executable. Needs one param man.\n");
        exit(EXIT_FAILURE);
    }

    FILE *in, *out;
    if (!(in = fopen(argv[1], "r"))) {
        printf("%s ain't a file\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    int namelen = strlen(argv[1]) + 5;
    char out_path[namelen];
    strncpy(out_path, argv[1], namelen - 5);
    out_path[namelen - 5] = '\0';
    strcat(out_path, ".red");
    if (!(out = fopen(out_path, "w"))) {
        printf("Can't create %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    int count = 0;
    char ch;

    while ((ch = getc(in)) != EOF) {
        if (count++ % 3 == 0) {
            putc(ch, out);
        }
    }

    fclose(in);
    fclose(out);
    return 0;
}

