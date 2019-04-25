#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "get_input.h"

void to_upper(char *s);
int countPuncs(const char *s);

int main(void) {
  char *demo = get_string();
  printf("I got %s\n", demo);
  to_upper(demo);
  printf("now I got %s\n", demo);
  printf("either way, it's got %d puncs\n", countPuncs(demo));
  return 0;
}

void to_upper(char *s) {
  while (*s) {
    *s = toupper(*s);
    s++;
  }
}

int countPuncs(const char *s) {
  int c = 0;
  while (*s) {
    c += ispunct(*s) ? 1 : 0;
    s++;
  }
  return c;
}

