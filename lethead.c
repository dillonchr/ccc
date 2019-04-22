#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define NAME "Flancrest Enterprises"
#define ADDRESS "744 Evergreen Terrace"
#define CITY "Springfield, USA"
#define WIDTH 40

void show_n_char(int n, char c, bool skip_new_line);
void printf_centered(int w, char *message);
void starbar(void);

int main(void) {
    starbar();
    printf_centered(WIDTH, NAME);
    printf_centered(WIDTH, ADDRESS);
    printf_centered(WIDTH, CITY);
    starbar();
    return 0;
}

void starbar(void) {
    show_n_char(WIDTH, '*', 0);
}

void show_n_char(int n, char c, bool skip_new_line) {
    for (int i = 0; i < n; i++) {
        putchar(c);
    }
    if (!skip_new_line) {
        putchar('\n');
    }
}

void printf_centered(int w, char *message) {
    int diff = w - strlen(message);
    int spaces = diff >> 1;
    show_n_char(spaces, ' ', 1);
    printf("%s\n", message);
}

