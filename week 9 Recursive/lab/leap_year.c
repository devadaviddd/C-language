//year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)
#include <stdio.h>


void leap(int year)
{
    if(year % 400 == 0)
    {
        printf("%d is a leap year because it is divisible by 400", year);
    }
    else if(year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is a leap year because it's divisible by 4 but not divisible by 100", year);
    }
    else if(year % 4 == 0 && year % 100 == 0)
    {
        printf("%d is not a leap year because it's divisible by 4 but also divisible by 100", year);      
    }
    else if(year % 4 != 0)
    {
        printf("%d is not a leap year because it's not divisible by 4", year);
    }

}



int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    leap(year);


    return 0;
}