#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double stuff[5];
    FILE *fp = fopen("ch13/binary.out", "r");
    if (!fp) {
        return EXIT_FAILURE;
    }

    int ret = fread(stuff, sizeof(double), 5, fp) - 5;
    for (int i = 0; i < 5; i++) {
        printf("%f\n", stuff[i]);
    }
    fclose(fp);
    return ret;
}

