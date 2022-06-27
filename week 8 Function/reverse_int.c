/*2. Write a function that takes an integer and returns another integer with its digits 
reversed. For example, if the given integer is 8592, the function should return 2958.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int reverse_int(int num)
{
    int cnt = 0;
    int reversed = 0;
    int num_duplicate = num;
    int result = 0;

    while(num_duplicate > 10)
    {
        num_duplicate = num_duplicate/10;
        cnt++;
    }


    while(cnt >= 0)
    {
        reversed = (num % 10) * pow(10, cnt);
        num = num/10;
        result = result + reversed;
        cnt--;
    }
    return result;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", reverse_int(num));
   
    return 0;
}