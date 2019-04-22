#include <stdio.h>
#include <stdbool.h>
#define UPPER +10000000L
#define LOWER -10000000L

long get_long(void);
bool bad_limits(long start, long end);
double sum_squares(long a, long b);
void ask_for_limits(long* start, long* stop);

int main(void) {
  long start;
  long stop;
  double answer;

  ask_for_limits(&start, &stop);

  while (start != 0 || stop != 0) {
    if (bad_limits(start, stop)) {
      printf("Please try again.\n");
    } else {
      answer = sum_squares(start, stop);
      printf("Sum of squares is %g\n", answer);
    }
    printf("Go again.\n");
    ask_for_limits(&start, &stop);
  }
  printf("Done\n");
}

void ask_for_limits(long *start, long *stop) {
  printf("Lower limit: ");
  *start = get_long();
  printf("Upper limit: ");
  *stop = get_long();
}


long get_long(void) {
  long input;
  char ch;

  while (scanf("%ld", &input) != 1) {
    while (getchar() != '\n') {
      ;
    }
    printf(" is not an integer. Try again\n");
  }
  return input;
}

double sum_squares(long a, long b) {
  double total = 0;
  for(long i = a; i <= b; i++) {
    total += (double)a * (double)b;
  }
  return total;
}

bool bad_limits(long start, long end) {
  if (start > end) {
    printf("%ld isn't smaller than %ld\n", start, end);
    return true;
  }
  if (start < LOWER || end < LOWER) {
    printf("Values must be %ld or higher\n", LOWER);
    return true;
  }
  if (start > UPPER || end > UPPER) {
    printf("Values must be %ld or lower\n", UPPER);
  }
  return false;
}

