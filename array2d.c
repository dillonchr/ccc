#include <stdio.h>
#define ROWS 3
#define COLS 4

void sum_rows(int ar[][COLS], int rows);
void sum_cols(int ar[][COLS], int rows);
void sum_all(int rows, int cols, int ar[rows][cols]);
int get_biggest(int ar[], int n);
int *reverse(int ar[], int n);

int main(void) {
    int junk[ROWS][COLS] = {
        {2,4,6,8},
        {3,5,7,9},
        {12,10,8,6}
    };
    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    sum_all(ROWS, COLS, junk);

    int biggest = get_biggest(junk[1], 4);
    printf("The biggest number is %d\n", biggest);

    int *rev = reverse(junk[2], COLS);
    printf("Reversed array has: ");
    for (int i = 0; i < COLS; i++) {
        printf("%d ", rev[i]);
    }
    printf("\n");
    return 0;
}

int *reverse(int ar[], int n) {
    static int r[COLS];
    int i = n;
    while(i--) {
        r[n - i - 1] = ar[i];
        printf("%d has %d\n", n-i-1, r[n-i-1]);
    }
    return r;
}

void sum_rows(int ar[][COLS], int rows) {
    int total;
    for (int i = 0; i < rows; i++) {
        total = 0;
        for (int j = 0; j < COLS; j++) {
            total += ar[i][j];
        }
        printf("row %d: sum = %d\n", i, total);
    }
}

void sum_cols(int ar[][COLS], int rows) {
    int total;
    for (int i = 0; i < COLS; i++) {
        total = 0;
        for (int j = 0; j < rows; j++) {
            total += ar[j][i];
        }
        printf("col %d: sum = %d\n", i, total);
    }
}

void sum_all(int rows, int cols, int ar[rows][cols]) {
    int total = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            total += ar[i][j];
        }
    }
    printf("total sum = %d\n", total);
}

int get_biggest(int ar[], int n) {
    int biggest = 0;
    int cur;
    for (int i = 0; i < n; i++) {
        cur = ar[i];
        if (cur > biggest) {
            biggest = cur;
        }
    }
    return biggest;
}

