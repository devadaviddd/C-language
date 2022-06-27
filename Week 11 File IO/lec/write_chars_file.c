#include <stdio.h>
int main() {
// // Create empty text file namely test.txt
    FILE *fp = fopen("test.txt", "w");

    if (fp == NULL) {
        printf("Cannot create file\n");
        return -1; //indicate main program error
    }

    // Write some characters to the file
    for (int ch = 'a'; ch <= 'z'; ch++) {
        fputc(ch, fp); 
    }

    // Close file
    fclose(fp);
    return 0;
}
