#include <stdio.h>

int main (void) {
  char input;
  const char ZERO = '0';
  int oddsCount = 0;
  int oddsSum = 0;
  int evensCount = 0;
  int evensSum = 0;

  while((input = getchar()) != ZERO) {
    int d = input - '0';
    if (d % 2) {
      oddsCount++;
      oddsSum += d;
    } else {
      evensCount++;
      evensSum += d;
    }
  }
  printf("%d even numbers\n", evensCount);
  printf("%.1f even average\n", (float) evensSum / (float) evensCount);
  printf("%d odd numbers\n", oddsCount);
  printf("%.1f odd average\n", (float) oddsSum / (float) oddsCount);

  return 0;
}

