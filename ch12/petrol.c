#include <stdio.h>
#include <stdbool.h>
#include "../get_input.h"
#include "petrol2.h"

void print_enter_msg(bool with_quit_msg);

int main(void) {
    register int mode;
    print_enter_msg(0);
    mode = get_int();
    while (mode >= 0) {
        set_mode(mode);
        get_info();
        show_info();
        print_enter_msg(1);
        mode = get_int();
    }
    printf("Donezo.\n");

    return 0;
}

void print_enter_msg(bool with_quit_msg) {
    printf("Enter 0 for metric mode, 1 for US mode%s: \n", with_quit_msg ? " (-1 to quit)" : "");
}

