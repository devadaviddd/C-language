#include <stdio.h>
#define MAX_CHARS_PER_LINE 200
int main() {
// Create empty text file namely test.txt
    FILE *fp = fopen("test.txt", "w+");

    if (fp == NULL) {
        printf("Cannot open file\n");
        return -1;
    }

    // Write some strings to file
    fputs("Hello everyone!\n", fp);
    fputs("This is Engineering Computing 1\n", fp);

    /* Read strings from file and print out */
    rewind(fp); //set position to beginning

    //Read a line (including new line '\n')
    char str[MAX_CHARS_PER_LINE];
    fgets(str, MAX_CHARS_PER_LINE, fp);
    printf("%s", str);

    //Read 10 characters of the next line
    fgets(str, 10, fp);
    printf("%s", str);

    // Close file
    fclose(fp);
    return 0;
}
