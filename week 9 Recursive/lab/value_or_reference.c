#include <stdio.h>

void myfunc(int *x)
{
    *x = 20;
}

void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


int main()
{
    //Qa
    int x = 10;
    printf("x before function call: %d\n", x); 
    myfunc(&x);
    printf("x after function call: %d\n", x);

    //Qb
    int n1 = 50, n2 = 60;
    printf("Values before swapping: n1 = %d, n2 = %d\n", n1, n2);
    swap(&n1, &n2);
    printf("Values after swapping: n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}