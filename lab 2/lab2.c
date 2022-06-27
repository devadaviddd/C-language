#include <stdio.h>
#include <math.h>

int main()
{
    /*The program below gets a Celsius temperature then convert it to Fahrenheit (conversion 
formula can be found here).*/
    printf("Ex1: \n");
    float c_temp, f_temp;

    printf("Enter C temperature: ");
    scanf("%f", &c_temp);

    f_temp = c_temp * 9/5 + 32;
    printf("Converted to F temperature: %.2f\n", f_temp);

    /*2. Get an amount in VND then convert it to USD. Assume that the exchange rate of 1 USD
to VND is 23,150 VND.*/
    printf("Ex2: \n");
    float VND, USD;

    printf("Type the amount of VND you enter to convert to USD: ");
    scanf("%f", &VND);

    USD = VND / 23150;
    printf("%.2f VND to %.2f USD\n", VND, USD);

    /*3. Get two numbers x, y and find x^y using the pow() function from the math.h library. Hint:
use the option -lm (e.g. gcc main.c -lm) when compiling your program.*/
    printf("Ex3: \n");
    int x;
    int y;
    printf("Enter x = ");
    scanf("%d", &x);

    printf("Enter y = ");
    scanf("%d", &y);

    int x_power_of_y = pow(x, y);
    printf("%d^%d = %d\n", x, y, x_power_of_y);

    /*4. In an imaginary course, there are three assessments asmt1, asmt2, and asmt3 whose 
weights are 30%, 30% and 40% respectively. Get the values of asmt1, asmt2, and asmt3 
from the user in one line then compute the final result and print it with two digits after 
the decimal. Assume that the values that the user enters are always integers between 0 
and 100.*/
    printf("Ex4: \n");
    float asmt1, asmt2, asmt3;
    float final = 0;
    printf("Enter points of asmt1, asmt2, asmt3: ");
    scanf("%f %f %f", &asmt1, &asmt2, &asmt3);
    
    final = (0.3 * asmt1) + (0.3 * asmt2) + (0.4 * asmt3);
    printf("Final result is: %.2f\n", final);

    /*5. Get an integer as minutes then calculate its equivalent in hours and remaining minutes. 
For example, 768 minutes is 12 hours 48 minutes. Hint: use the / and % operator.
*/
    printf("Ex5: \n");
    int minutes;
    int remain_minutes;
    printf("Enter a minutes: ");
    scanf("%d", &minutes);

    remain_minutes = minutes % 60;

    printf("%d minutes is %d hours %d minutes\n", minutes, minutes/60, remain_minutes);

    /*6. Get an integer from the user then calculate the sum of all the digits in that integer. For 
example, if the integer is 932, the sum of all the digits is 9+ 3 + 2 = 14.
Assume that the input integer is always between 0 and 999. You are only allowed to 
apply the concepts learned so far to solve this problem. Hint: use the / and % operator.*/
    printf("Ex6: \n");
    int number;
    int sum = 0;
    int first_digit, second_digit, third_digit;
    printf("Enter a number always between 0 and 999: "); 
    scanf("%d", &number);

    first_digit = number / 100; 
    second_digit = (number % 100)/ 10;
    third_digit = number % 10; 
    sum = first_digit + second_digit + third_digit;

    printf("Sum of %d is %d", number, sum);

    return 0;
}