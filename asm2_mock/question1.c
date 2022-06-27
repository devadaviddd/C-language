#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main()
{
    char str[SIZE];
    printf("Enter your password: ");
    scanf("%[^\n]", str);

    for(int i = 0; i < SIZE; i++)
    {
        if(str[i] == 's')
        {
            str[i] = '$';
        }
        else if(str[i] == 'a')
        {
            str[i] = '@';
        }
        else if(str[i] == 'l')
        {
            str[i] = '1';
        }
        else if(str[i] == 'o')
        {
            str[i] = '0';
        }
    }
    printf("%s", str);

    return 0;
}