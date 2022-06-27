#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int prime_number(int num)
{
    if(num <= 1)
    {
        printf("Invalid number\n");
    }
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return num = 0;
        }
    }
    return num = 1;
    
}

int main()
{
    int num;
    printf("Enter a number to check it is prime number or not: ");
    scanf("%d", &num);
    num = prime_number(num);
    if(num == 1)
    {
        printf("This is a prime number");
    }
    else
    {
        printf("This is not a prime number");
    }

    return 0;
}