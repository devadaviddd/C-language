#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 225 

int main()
{
    /*Write a program in C to find the number of times a given word 'the' appears in the given string
*/
    char str[SIZE];
    int count = 0;

    printf("Input a string: ");
    scanf("%[^\n]", str);


    int len = strlen(str);


    for(int i = 0; i < len; i++)
    {
        if((str[i] == 't' && str[i + 1] == 'h' && str[i + 2] == 'e' &&  (str[i - 1] == ' ' || i == 0)) ||
           (str[i] == 'T' && str[i + 1] == 'h' && str[i + 2] == 'e' &&  (str[i - 1] == ' ' || i == 0))) 
        {
            count++;
        }
    }

    printf("The frequency of the word 'the' is: %d", count);
    return 0;
}