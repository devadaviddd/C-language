#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 50

int main()
{
    char str[SIZE];

    printf("Enter a string: ");
    scanf(" %[^\n]s", str);

    /*2. Word Count
A word is a sequence of characters with no whitespace characters. Count the number of words 
in a  given sentence. For example, this sentence has 7 words.*/
    char *token[25];
    int i = 0;
    int cnt = 1;

    token[0] = strtok(str," ");

    while(1)
    {
        i++;
        token[i] = strtok(NULL, " ");
        if(token[i] != NULL)
        {
            printf("%s\n", token[i]);
            cnt++;
        }
        else
        {
            break;
        }
    }
    printf("%d", cnt);


    return 0;
}