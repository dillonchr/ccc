#include <stdio.h>

int main(void) {
    int cups;
    printf("How many cups?: ");
    scanf("%d", &cups);
    float pints = cups / 2.0f;
    int oz = cups * 8;
    int tsb = oz * 2;
    int tsp = tsb * 3;
    printf("That's %f pints\n%d Ounces\n%d Tablespoons\nand %d Teaspoons\n", pints, oz, tsb, tsp);
    return 0;
}

