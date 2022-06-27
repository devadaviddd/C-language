#include <stdio.h>
#include <stdlib.h>

struct coordinate
{
    int x;
    int y;
};

int main()
{
    //Declare a variable with type of "coordinate" structure 
    struct coordinate point;

    //Access its elements 
    point.x = 3;
    point.y = 5;
    printf("Coordinate values of the point is x = %d, y = %d\n", point.x, point.y);

    return 0;
}