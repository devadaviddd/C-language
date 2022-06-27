#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void recursive_printdigits(int num)
{
    if(num == 0)
    {
        return;
    }
    //recursive_printdigits(num / 10); // 35 // 3 // 0
    printf("%d ", num % 10); // 6 5 3 --> 3 5 6
    recursive_printdigits(num / 10);
}

void normal_printdigits(int num)
{
    int arr[50];
    int count = 0;
    while(num  > 0)
    {
        arr[count] = num % 10;
        num = num / 10;
        count++;
    }

    for(int i = count - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//sprint convert all things into a string
void sprintf_digit(int num)
{
    char digit_str[50];
    sprintf(digit_str, "%d", num);  

    for(int i = 0; digit_str[i] != '\0'; i++)
    {
        printf("%c", digit_str[i]);
    }
    printf("\n");
}

int Sum(int num)
{
    if(num == 0)
    {
        return 0;
    }
    return num % 10 + Sum(num / 10);
}


int main()
{
    /*a) Write a function printdigits(int i) which prints the digits of positive integer i
separated by a space. For example, printdigits (7258) prints 7 2 5 8.*/
    
    int num;
    printf("Enter a integer number: ");
    scanf("%d", &num);
    recursive_printdigits(num);
    printf("\n");
    normal_printdigits(num);
    sprintf_digit(num);
    /*b) Write another function which calculates the sum of digits of a positive integer using 
recursion.*/
    printf("%d", Sum(num));

    #if 0
    int result = 0;
    while(num > 0)
    {
        result = result + (num % 10);
        num = num / 10;
    }
    printf("Result: %d", result);
    #endif
 
}
