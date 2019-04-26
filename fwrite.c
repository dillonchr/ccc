#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

int main(void) {
    FILE *fp;
    char *message = "Hello, adding this from a string man. Memory to memory. Dust to dust.";
    char path[PATH_MAX];
    if (getcwd(path, sizeof(path))) {
        strcat(path, "/output.txt");
        if (fp = fopen(path, "wb")) {
            fputs(message, fp);
            fprintf(fp, "\nAnd a bit more.\n");
            fclose(fp);
            return 0;
        }
        return 2;
    }
    return 1;
}

