#include <stdio.h>
int main() {
    // Open an existing file namely test.txt
    FILE *fp = fopen("test.txt", "r");

    if (fp == NULL) {
        printf("Cannot open file\n");
        return -1;
    }

    // Read the characters from file and print it out
    for (int ch = fgetc(fp); ch != EOF; ch = fgetc(fp)) {
        putchar(ch); //print out this character to the screen
    }

    // Close file
    fclose(fp);
    
    return 0;
}
