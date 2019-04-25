#include <stdio.h>
#include <stdbool.h>
#include "get_input.h"

void wait_til_newline(void);
void enter_prompt(char *type_name, bool is_retry);

char *get_string(void) {
    char n[256];
    static char *r;
    int i = 0;
    enter_prompt("string", false);
    r = fgets(n, 256, stdin);
    if (r) {
      while (n[i] != '\n' && n[i] != '\0') {
        i++;
      }
      if (n[i] == '\n') {
        n[i] = '\0';
      } else {
        wait_til_newline();
      }
    }
  return r;
}

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
    char n[256];
    int i = 0;
    while (1) {
        enter_prompt("double", i++);
        fgets(n, 256, stdin);
        if (sscanf(n, "%lf", &r) == 1) {
            break;
        }
    }
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


