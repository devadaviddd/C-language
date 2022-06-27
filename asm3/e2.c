#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 225

void question_a(char str[])
{
    for(int i = 0; i < strlen(str); i++)
    {
        if(isalpha(str[i]))
            printf("%c", str[i]);
    }
}

int question_b(char str[])
{
    int sum = 0;
    int num = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(isdigit(str[i]))
        {
            num = str[i] - '0';
            if(num % 2 != 0)
            {
                sum = num + sum;
            }
        }
    }
    return sum;
}

/*c) Accept two strings namely main and sub and return 1 if all characters of sub are found in main 
regardless of case insensitivity, return 0 otherwise. (10pt) 
For example, main: "12Hello 34", sub: "12 34elho"  function returns 1 */
int question_c(char str[], char sub[])
{
    int len_main = strlen(str);
    int len_sub = strlen(sub);

    //convert to upper case
    for(int i = 0; i < len_main; i++)
    {
        if(isupper(str[i]))
        {
            str[i] = str[i] + 32;
        }
        if(isupper(sub[i]))
        {
            sub[i] = sub[i] + 32;
        }
    }

    for(char i = 0; i < len_main - 1; i++)
    {
        for(char j = i; j < len_main; j++)
        {
            if(str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }   
        }
    }
    for(char i = 0; i < len_sub - 1; i++)
    {
        for(char j = i; j < len_sub; j++)
        {
            if(sub[i] > sub[j])
            {
                int temp = sub[i];
                sub[i] = sub[j];
                sub[j] = temp;
            }   
        }
    }
    int check = strcmp(str, sub);
    if(check == 0)
        return 1;
    else
        return 0;
}

int main()
{
    char str[SIZE];
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);

    //a
    question_a(str);
    //b
    printf("\nSum of odd: %d\n",question_b(str));
    //c
    char sub[SIZE];
    printf("Enter a sub string: ");
    scanf(" %[^\n]s", sub);
    printf("Function returns: %d", question_c(str, sub));


    return 0;
}