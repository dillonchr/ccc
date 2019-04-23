#include <stdio.h>
#include "get_input.h"
#define SIZE 5

int sum(int *arr, int n);
int sump(int *min, int *max);

int main(void) {
    int hep[SIZE] = {0};
    for(int i = 0; i < SIZE; i++) {
        hep[i] = get_int();
    }
    printf("First go says %d\n", sum(hep, SIZE));
    printf("Second go says %d\n", sump(hep, hep + SIZE));
    return 0;
}

int sum(int *arr, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

int sump(int *min, int *max) {
    int total = 0;
    while (min < max) {
        total += *min;
        min++;
    }
    return total;
}

