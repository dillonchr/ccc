#include "petrol2.h"

static int mode;
static double consumption;
static int distance;
static char *dist_units;
static char *cons_units;

void set_mode(int external_mode) {
    mode = external_mode;
}

void get_info(void) {
    dist_units = mode ? "miles" : "kilometres";
    printf("Enter distance traveled in %s:\n", dist_units);
    distance = get_int();
    cons_units = mode ? "gallons" : "liters";
    printf("Enter fuel consumed in %s:\n", cons_units);
    consumption = get_double();
}

void show_info(void) {
    register double mpg = (double) distance / consumption;
    printf("Fuel consumption is %0.2f %s per %s\n", mpg, cons_units, dist_units);
}
