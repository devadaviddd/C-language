/*5. Write a program to read in a string which may contains whitespace characters, print out 
the longest word of that string.*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 225

int main()
{
    char str[SIZE];
    char word[SIZE];
    char max_word[SIZE];
    int max_length = 0;
    
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        int j = 0;
        for(; !isspace(str[i]) && str[i] != '\0'; j++, i++)
        {
            word[j] = str[i];
        }
        word[j] = '\0';

        if(strlen(word) > max_length)
        {
            max_length = strlen(word);
            strcpy(max_word, word);
        }
    }

    printf("%s", max_word);
    return 0;
}