#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter 2 integers (weighted 60%%, 40%%): ");
    scanf("%d %d", &num1, &num2);

    float avg = (float) num1 * 60/100 + (float) num2 * 40/100;
    printf("Weighted average is %.2f\n", avg);

    return 0;
}