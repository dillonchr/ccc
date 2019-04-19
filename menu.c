#include <stdio.h>

char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main(void) {
    char choice;

    while((choice = get_choice()) != 'q') {
        switch(choice) {
            case 'a':
                printf("Always be closing.\n");
                break;
            case 'b':
                printf("Ding ding, ding ding\a\n");
                break;
            case 'c':
                count();
                break;
            default:
                printf("I don't know what you meant by '%c'\n", choice);
                break;
        }
        printf("\n");
    }
    return 0;
}

char get_choice(void) {
    printf("Enter the letter of your choice:\n");
    printf("%-20s%-20s\n", "a. advice", "b. bell");
    printf("%-20s%-20s\n", "c. count", "q. quit");

    char c = get_first();
    while ((c < 'a' || c > 'c') && c != 'q') {
        printf("Please try again, using only a, b, c, or q\n");
        c = get_first();
    }
    return c;
}

char get_first(void) {
    int ch;
    ch = getchar();
    while (getchar() != '\n') {
        ;
    }
    return ch;
}

void count(void) {
    int n, i;
    printf("Count how far? Up to: ");
    n = get_int();
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
}

int get_int(void) {
    int d;
    while (scanf("%d", &d) != 1) {
        printf("Try a real number bozo.\n");
    }
    while (getchar() != '\n') {
        ;
    }
    return d;
}

