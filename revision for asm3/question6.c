/**6. Write your own version of the C library function int atoi(const char *str) which 
converts a string of digits str to an integer value and returns it. If no valid conversion
could be performed, the function returns zero.**/
#include <stdio.h>
#include <ctype.h>
#define SIZE 255

//123
void atoi(char str[])
{
    int num = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(isdigit(str[i]))
        {
            num = num*10 + (str[i] - '0');
        }
    }
    printf("%d", num);
}

int main()
{
    char str[SIZE];
    printf("Enter a string to convert to int: ");
    scanf(" %[^\n]", str);
    atoi(str);

    return 0;
}
