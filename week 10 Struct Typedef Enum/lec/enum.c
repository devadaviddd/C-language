#include <stdio.h>

//Assign constants in to variable by default start at 0 then ++
enum day {MON = 1, TUE, WED, THU, FRI, SAT, SUN};

int main()
{
    //Check values of each enum constants
    for(enum day i = MON; i <= SUN; i++)
    {
        printf("%d", i);
    }
}