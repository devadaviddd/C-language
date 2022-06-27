#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 225

int main()
{
    char string[SIZE] = "Good afternoon";
    printf("%s\n", string + 1);

    if(strncmp(string + 1, "oo", 2) == 0) //compare only n character
    {
        strncpy(string + 1, "99", 2);
    }
    printf("Whole string: %s\n", string);
    return 0;
}