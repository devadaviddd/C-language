#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int intpow(int base, int exponent)
{
    int result = base;
    for(int i = 1; i < exponent; i++)
    {
        result = result * base;
    }
    return result;    
}

int main()
{
    printf("%d", intpow(3, 5));
    return 0;
}