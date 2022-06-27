#include <stdio.h>
#define MAX_CHARS_PER_LINE 200
int main() {
    // Create empty text
    FILE *fp = fopen("test.txt", "w+");

    if (fp == NULL) {
        printf("Cannot open file\n");
        return -1;
    }

    // Write formatted text (strings, ints, floats) 
    // to file
    fprintf(fp, "Today is %d Jan 2022 \n", 4);
    int num = 10; float dec = 4.01;
    fprintf(fp, "%d + %f = %f\n", num, dec, num + dec);

    /* Read formatted text (strings, ints, floats) 
    from file */
    rewind(fp); //set position to beginning

    //read a string until seeing '\n'
    char str[MAX_CHARS_PER_LINE];
    fscanf(fp, "%[^\n]s", str); 
    printf("%s\n", str); //print out the screen to check

    //read numbers in correct format
    int n; float f1, f2;
    fscanf(fp, "%d + %f = %f\n", &n, &f1, &f2); 
    printf("%d %f %f\n", n, f1, f2);

    // Close file
    fclose(fp);
    return 0;
}
