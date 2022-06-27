#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 50

int main()
{
    /*A palindrome is a string that reads the same both forward (left-to-right) and backward (right to-left). Here are some palindromes: "eye”, “madam", “otto”, "1224221". Get a string and check 
if it is a palindrome or not. */

    char str[SIZE];
    char str_reverse[SIZE];
    printf("Enter a palindrome: ");
    scanf("%[^\n]s", str);


    //copy to str_reverse
    strcpy(str_reverse, str);
    int length = strlen(str);

    for(int i = 0; i < length/2; i++)
    {
        int temp = str[i];
        str[i] = str[length - (i + 1)];
        str[length - (i + 1)] = temp;
    }

    if(strcmp(str, str_reverse) == 0)
    {
        printf("It is a palindrome.\n");
    }


    return 0;
}