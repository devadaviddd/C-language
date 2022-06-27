#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 225

int main()
{
    /*A word is a sequence of characters with no whitespace characters. Count the number of words 
    in a given sentence. For example, this sentence has 7 words.*/
    int count_words = 0;

    char str[SIZE];
    printf("Enter a senctence: ");
    scanf("%[^\n]", str);
    
    //Calculate string's length
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
            count_words++;        
    }
    printf("This sentence has %d words\n", count_words);


    return 0;
}