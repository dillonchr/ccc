#include <stdio.h>

int main(void) {
  const char SPACE = ' ';
  char ch;
  while((ch = getchar()) != '\n') {
    putchar(ch + (ch != SPACE));
  }
  putchar(ch);
  return 0;
}
