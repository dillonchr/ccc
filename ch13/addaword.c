#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void) {
    FILE *fp;
    if (!(fp = fopen("wordy", "a+"))) {
        fprintf(stderr, "Something wrong there. Can't open up wordy mc word word.\n");
        exit(EXIT_FAILURE);
    }

    char words[MAX];
    puts("Enter words to add to the file. Press # at the beginning of a line to end it");

    while ((scanf("%40s", words)) == 1 && words[0] != '#') {
        fprintf(fp, "%s\n", words);
    }

    puts("File contents:");
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1) {
        puts(words);
    }
    fclose(fp);
    puts("Done!");
    return EXIT_SUCCESS;
}

