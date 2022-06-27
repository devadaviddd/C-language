/*b) Create an array of 4 time values and ask the user to input values for them with correct 
format above, then print out the latest time.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 4

typedef int hour;
typedef int minute;
typedef int second;

typedef struct
{
    hour hh;
    minute mm;
    second ss;
}time;

int hours_convert(time point[])
{
    float arr[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        arr[i] = point[i].hh * 3600 + point[i].mm * 60 + point[i].ss;
    }

    float max = arr[0];
    for(int i = 0; i < SIZE; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    for(int i = 0; i < SIZE; i++)
    {
        if(arr[i] == max)
            return i;
    }
}



int main()
{
    time point[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        printf("Enter point time %d: ", i + 1);
        scanf("%d:%d:%d", &point[i].hh, &point[i].mm, &point[i].ss);
    }

    int index = hours_convert(point);
    printf("%d:%d:%d", point[index].hh, point[index].mm, point[index].ss);
    return 0;
}