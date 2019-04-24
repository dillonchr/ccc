#include <stdio.h>
#include "get_input.h"

double min(double x, double y);
void chline(char ch, int start, int length);
void chrow(char ch, int length, int rows);
double hm(int a, int b);

int main(void) {
    char *str = get_string();
    printf("Hey we got a string. %s\n", str);
    double da = get_double();
    double db = get_double();
    printf("Lesser is %f\n", min(da, db));
    char ch = get_char();
    int ct1 = get_int();
    int ct2 = get_int();
    chline(ch, ct1, ct2);
    ch = get_char();
    ct1 = get_int();
    ct2 = get_int();
    chrow(ch, ct1, ct2);
    ct1 = get_int();
    ct2 = get_int();
    chrow(ch, ct1, ct2);
    printf("Harmonic mean of %d and %d is obviously: %f\n", ct1, ct2, hm(ct1, ct2));
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
