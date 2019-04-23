#include <stdio.h>
#include <stdbool.h>
#include "get_input.h"

void wait_til_newline(void);
void enter_prompt(char *type_name, bool is_retry);

int get_int(void) {
    int r;
    enter_prompt("integer", false);
    while(scanf("%d", &r) != 1) {
        enter_prompt("integer", true);
    }
    wait_til_newline();
    return r;
}

long get_long(void) {
    long r;
    enter_prompt("long integer", false);
    while(scanf("%ld", &r) != 1) {
        enter_prompt("long integer", true);
    }
    wait_til_newline();
    return r;
}

char get_char(void) {
    int ch;
    enter_prompt("char", false);
    ch = getchar();
    wait_til_newline();
    return ch;
}


double get_double(void) {
    double r;
    enter_prompt("double", false);
    while(scanf("%lf", &r) != 1) {
        enter_prompt("double", true);
    }
    wait_til_newline();
    return r;
}

void wait_til_newline(void) {
    while(getchar() != '\n') {
        ;
    }
}

void enter_prompt(char *type_name, bool is_retry) {
    if (is_retry) {
        printf("Try again. ");
    }
    printf("Please enter a %s: ", type_name);
}


