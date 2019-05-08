#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double stuff[5] = {5.0f, 4.0f, 3.1415f, 8.0f, 9.0f};
    FILE *fp = fopen("ch13/binary.out", "w");
    if (!fp) {
        return EXIT_FAILURE;
    }

    int ret = fwrite(stuff, sizeof(double), 5, fp) - 5;
    fclose(fp);
    return ret;
}
