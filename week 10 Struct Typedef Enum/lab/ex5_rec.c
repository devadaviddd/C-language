/*5. Define a data type rect for rectangles that are parallel to the axes in a Cartesian 
coordinate system. Represent a rectangle by its lower left and upper right endpoints 
using the point data type above.*/
#include <stdio.h>
#include <math.h>

typedef struct
{
    double x, y;
}point;

typedef struct
{
    point lower_left;
    point upper_right;
}rec;

//a. Write a function that computes the area of a rectangle. 
void area(rec a)
{
    double xdif = abs(a.lower_left.x - a.upper_right.x);
    double ydif = abs(a.lower_left.y - a.upper_right.y);
    double area = xdif * ydif;
    printf("xdif = %lf. ydif = %lf. Area = %lf.\n", xdif, ydif, area);
}

/*b. Write a function that returns 1 if a point falls within a rectangle, 0 otherwise. Use the 
point and rect data types above.*/
int in_rec(point inside_rec, rec a)
{
    if((a.lower_left.x <= inside_rec.x  && inside_rec.x <= a.upper_right.x)
    &&(a.lower_left.y <= inside_rec.y && inside_rec.x <= a.upper_right.y))
        return 1;
    else
        return 0;
}

/*c. Write a function that returns 1 if the first rectangle is completely contained inside 
the second rectangle, and 0 otherwise. Hint: check if the lower left and upper right 
endpoints of the first rectangle fall within the second rectangle.
*/
int rec_in_rec(rec a, rec b)
{
    if(in_rec(a.lower_left, b) && in_rec(a.upper_right, b))
        return 1;
    else 
        return 0;
}

/*d. Write a program that reads in a list of points (given by their x and y coordinates) and 
determines the pair that is the farthest apart. Hint: store the points in an array and 
use the pointdist() function.*/

void print_point_arr(point point_arr[], int size)
{
    double distance_arr[size]; //debugging
    double max = 0;


    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i; j < size; j++)
        {
            double xdis = point_arr[j].x - point_arr[i].x;
            double ydis = point_arr[j].y - point_arr[i].y;
            double distance = sqrt(xdis * xdis + ydis * ydis);
            if(distance > max)
            {
                max = distance;
            }
        }
    }
    printf("Max distance = %lf", max);
    printf("Pair: ");
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i; j < size; j++)
        {
            double xdis = point_arr[j].x - point_arr[i].x;
            double ydis = point_arr[j].y - point_arr[i].y;
            double distance = sqrt(xdis * xdis + ydis * ydis);
            if(distance == max)
            {
                printf("[%lf %lf] ", point_arr[i].x, point_arr[i].y);
                printf("[%lf %lf] ", point_arr[j].x, point_arr[j].y);
            }
        }
    }
}

int main()
{
    //a
    #if 0 
    rec a;
    printf("Enter lower left point A: x and y: ");
    scanf("%lf %lf", &a.lower_left.x, &a.lower_left.y);
    printf("Enter upper right point A: x and y: ");
    scanf("%lf %lf", &a.upper_right.x, &a.upper_right.y);
    area(a);
    #endif

    //b
    #if 0
    point inside_rec;
    printf("Enter a point to check if it in the rectangle or not: ");
    scanf("%lf %lf", &inside_rec.x, &inside_rec.y);
    if(in_rec(inside_rec, a) == 1)
        printf("This point is in rectangle\n");
    else
        printf("This is Not in the rectangle\n");
    #endif

    //c
    #if 0
    rec b;
    printf("Enter lower left point B: x and y: ");
    scanf("%lf %lf", &b.lower_left.x, &b.lower_left.y);
    printf("Enter upper right point B: x and y: ");
    scanf("%lf %lf", &b.upper_right.x, &b.upper_right.y);
    if(rec_in_rec(a, b) == 1)
        printf("This rectangle A is in rectangle B\n");
    else
        printf("This rectangle A Not in the rectangle B\n");
    #endif

    //d
    int size;
    printf("How many points in array: ");
    scanf("%d", &size);
    point point_arr[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter [x. y] value for point %d: ", i + 1);
        scanf("%lf %lf", &point_arr[i].x, &point_arr[i].y);
    }

    print_point_arr(point_arr, size);



    return 0;
}