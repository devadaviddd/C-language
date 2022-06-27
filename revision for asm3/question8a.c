/*
a) Define a data type time with elements are integer values of hour, minute, second.
Ask the user to input two time values in hh:mm:ss format, and print out their 
difference (first time – second time) in hours with two digits of precision (after decimal 
point).
Sample Run:
Enter the first time point: 17:08:40
Enter the second time point: 13:25:12
Time Difference: 3.72 hours.
Note: the difference can be negative value*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef int hour;
typedef int minute;
typedef int second;

typedef struct
{
    hour hh;
    minute mm;
    second ss;
}time;

int main()
{
    time firstpoint, secondpoint;
    printf("Enter the first time point: ");
    scanf("%d:%d:%d", &firstpoint.hh, &firstpoint.mm, &firstpoint.ss);
    printf("Enter the second time point: ");
    scanf("%d:%d:%d", &secondpoint.hh, &secondpoint.mm, &secondpoint.ss);

    time difference = {firstpoint.hh - secondpoint.hh, firstpoint.mm - secondpoint.mm, firstpoint.ss - secondpoint.ss};
    printf("%d:%d:%d\n", difference.hh, difference.mm, difference.ss);

    float hours;
    hours = difference.hh * 3600 + difference.mm * 60 + difference.ss;
    printf("%.2lf", hours/3600);

    return 0;
}