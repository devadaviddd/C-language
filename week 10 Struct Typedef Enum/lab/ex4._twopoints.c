#include <stdio.h>
#include <math.h>
typedef struct { double x; double y; } point;
 
/*a. Write a function pointshow() so that the program is functionally equivalent to the 
three programs above*/
void pointshow(point test)
{
    printf("[%lf, %lf]\n", test.x, test.y);
}

/*b. Write a function pointdist() that computes the Euclidean distance between two 
points.*/

void distance(point a, point b)
{
    double xdis = a.x - b.x;
    double ydis = a.y - b.y;
    double distance = sqrt(xdis * xdis + ydis * ydis);
    printf("%lf\n", distance);
}

/*c. Write a function pointequal() that returns 1 if the two points are "equal"; and 0 
otherwise. With floating point values it doesn't make much sense to test for exact 
equality; instead check to see if the distance between the points is less than 
0.000001*/
int pointequal(point a, point b)
{
    if(a.x == b.x && a.y == b.y)
        return 1;
    else
        return 0;
}

int main(void) 
{
    //Qa
    point test = {2, 3};
    pointshow(test);

    //Qb
    point a, b;
    printf("Enter point A: ");
    scanf("%lf %lf", &a.x, &a.y);
    printf("Enter point B: ");
    scanf("%lf %lf", &b.x, &b.y);
    distance(a, b);

    //Qc
    if(pointequal(a, b) == 1)
        printf("Two points are equal");
    else
        printf("Two points are Not equal");

    
    return 0;
}

