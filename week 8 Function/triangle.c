/*1. Write a function that takes three float numbers, return 1 if they can form a triangle (as 
edge values) and 0 otherwise.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int triangle(float a, float b, float c)
{
    int check = 0;
    if((a + b > c) && (a + c > b) && (b + c > a))
    {
        return check = 1;
    }
}

int main()
{
    float a;
    float b;
    float c;
    scanf("%f %f %f", &a, &b, &c);
    if(triangle(a, b, c) == 1)
    {
        printf("Is Triangle");
    }
    else
    {
        printf("NOT Triangle");
    }

    return 0;
}