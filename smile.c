#include <stdio.h>

void smile(int count);

int main(void) {
    int i = 3;
    while (i > 0) {
        smile(i);
        i--;
    }
    return 0;
}

void smile(int count) {
    while (count > 0) {
        printf("Smile!");
        count--;
    }
    printf("\n");
}
