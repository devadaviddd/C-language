#include <stdio.h>
int main() {
    // Create empty text file namely test.txt
    FILE *fp = fopen("test.txt", "w");

    if (fp == NULL) {
        printf("Cannot create file\n");
        return -1;
    }

    // Write strings to file
    fputs("Hello everyone!\n", fp);
    fputs("It's week 11 now\n", fp);
    
    // Close file
    fclose(fp);
    return 0;
}
