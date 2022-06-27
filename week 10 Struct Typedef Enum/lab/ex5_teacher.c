#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct { double x; double y; } point;

//Define a rectangle by two points
typedef struct { 
    point lowerleft; 
    point upperright; 
} rec; 

//Distance between two points
double pointdist(point pta, point ptb){
    double xdif = (pta.x - ptb.x);
    double ydif = (pta.y - ptb.y);
    return sqrt(xdif*xdif + ydif*ydif);
}

int main()
{
    //Exercise d
    int size;
    printf("\nEnter the size of point list: ");
    scanf("%d", &size);
    point point_arr[size]; //array of points

    printf("\nEnter all the points: \n");
    for (int i = 0; i < size; i++){
        scanf("%lf %lf", &point_arr[i].x, &point_arr[i].y); //get x and y for each point
    }

    //Go through all pairs of points and get the maximum distance
    double maxdist = 0, idx1 = 0, idx2 = 1;
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            //calculate distance
            double dist = pointdist(point_arr[i], point_arr[j]);
            printf("i = %d, j = %d, dist = %lf\n", i, j, dist);
            
            //update if found larger value
            if (dist > maxdist){
                maxdist = dist;
                idx1 = i;
                idx2 = j;
            }
        }
    }
    
    printf("\nTwo points with largest distance: (%lf,%lf), (%lf,%lf)\n", 
            point_arr[idx1].x, point_arr[idx1].y, 
            point_arr[idx2].x, point_arr[idx2].y); 


    return 0;
}