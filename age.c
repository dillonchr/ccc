#include <stdio.h>

int main(void) {
    int ageInYears = 30;
    int ageInDays = 365 * ageInYears;
    printf("Since you're %d now, that means you lived %d days.\n", ageInYears, ageInDays);
    double secondsInAYear = 3.156e7;
    double secondsAlive = secondsInAYear * ageInYears;
    printf("Which is over %ld seconds! Wow!\n", (long) secondsAlive);
    return 0;
}
