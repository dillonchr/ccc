#include <stdio.h>

int main(void) {
    float in;
    printf("Enter a floating-point value: ");
    scanf("%f", &in);
    printf("fixed-point notation: %2.13f\n", in);
    printf("exponential notation: %e\n", in);
    printf("p notation: %a\n", in);
    return 0;
}

