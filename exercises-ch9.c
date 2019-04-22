#include <stdio.h>

double min(double x, double y);
void chline(char ch, int start, int length);
void chrow(char ch, int length, int rows);
double hm(int a, int b);

int main(void) {
    printf("Lesser is %f\n", min(5.0, 8.0));
    chline('+', 5, 40);
    chrow('*', 25, 4);
    printf("Harmonic mean of %d and %d is obviously: %f\n", 5, 7, hm(5, 7));
    return 0;
}

double min(double x, double y) {
    return x > y ? y : x;
}

void chline(char ch, int start, int length) {
    for (int i = 0; i < length; i++) {
        putchar(i >= start ? ch : ' ');
    }
    putchar('\n');
}

void chrow(char ch, int length, int rows) {
    for (int i = 0; i < rows; i++) {
        chline(ch, 0, length);
    }
}

double hm(int a, int b) {
    return 2.0 / (1.0/a + 1.0/b);
}
