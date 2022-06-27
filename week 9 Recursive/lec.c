#include <stdio.h>

void square(int *num)
{
    *num = (*num) * (*num);
}

int main()
{
    int x = 7;
    printf("x before the function call: %d\n", x);
    square(&x);
    printf("x after the function call: %d\n", x);
    
    return 0;
}