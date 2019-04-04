#include <stdio.h>

int main(void) {
    int ageInYears = 30;
    int ageInDays = 365 * ageInYears;
    printf("Since you're %d now, that means you lived %d days.\n", ageInYears, ageInDays);
    return 0;
}
