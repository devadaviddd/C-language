#include <stdio.h>

/*6. Get an integer from the user then calculate the sum of all the digits in that integer. For 
example, if the integer is 932, the sum of all the digits is 9+ 3 + 2 = 14.
Assume that the input integer is always between 0 and 999. You are only allowed to 
apply the concepts learned so far to solve this problem. Hint: use the / and % operator.*/

int main()
{
    int number;
    int sum = 0;
    int first_digit, second_digit, third_digit;
    printf("Enter a number always between 0 and 999: "); //933 //9
    scanf("%d", &number);

    first_digit = number / 100; //9 //0
    second_digit = (number % 100)/ 10;
    third_digit = number % 10; //9

    sum = first_digit + second_digit + third_digit;

    sum = (number % 1);

    printf("Sum of %d is %d", number, sum);

    return 0;
    
}