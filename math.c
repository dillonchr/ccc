#include <stdio.h>

int main(int argc, char*argv[]) {
    int a, b, c;
    char operator;

    if (argc == 4) {
        sscanf(argv[1], "%d", &a);
        sscanf(argv[3], "%d", &b);

        switch (*argv[2]) {
            case '+':
                c = a + b;
                break;
            case '-':
                c = a - b;
                break;
            case 'x':
            case 'X':
                c = a * b;
                break;
            case '/':
                c = a / b;
                break;
            default:
                printf("I don't know what to do with %c\n", *argv[2]);
                return 1;
        }
        printf("%d\n", c);
    }
    return 0;
}

