#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 10

int main()
{
    /*Get your birthdate in “dd/mm/yyyy” format. Print out which day of the week (Monday-Sunday) it was.*/
    
    #if 0
    char str[SIZE];
    printf("Input your birthday(dd/mm/yyyy): ");
    scanf("%[^\n]", str);
    printf("%s", str);
    #endif

    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char * day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int d, m, y;

    printf("Input your birthday(dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);
    
    //check for leap year
    if(y % 4 == 0 &&(y % 100 != 0 || y % 400 == 0))
    {
        month[1] = 29;
    }

    for(int i = 1900; i < y; i++)
    {
        //check for leap year
        if(i % 4 == 0 &&(i % 100 != 0 || i % 400 == 0))
        {
            d = d + 366;
        }
        else
        {
            d = d + 365;
        }
    }

    for(int i = 0; i < m - 1; i++)
    {
        d = d + month[i];
    }
    printf("This is a %s.\n", day[d % 7]);
    
    return 0;
}