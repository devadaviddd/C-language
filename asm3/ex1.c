/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2021C
  Lab Assessment: 3
  Author: Nguyen Tuong Khang
  ID: s3927112
  Compiler used: Compiler version gcc 8.1.0
  Created  date: 14/1/2021
  Acknowledgement: Lecture slides and tutorial classes of Linh Tran.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE 8
/*Question 1 (20 pts) 
Create an array of 8 integers with values are generated random numbers from 50 to 150 inclusively and 
print out all values.  
Print out largest even number, and average of first and second halves of the array (with two digits of 
precision after decimal point). 
Sample Run 
Array values: 69 53 149 94 74 144 145 97 
Largest even number: 144 
Average of first and second halves: 91.25 115.00 */

int main()
{
    srand(time(NULL));
    int arr[SIZE];
    int range1 = 50;
    int range2 = 150;
    int value = 0;

    for(int i = 0; i < SIZE; i++)
    {
        arr[i] = range1 + (rand() % (range2/2 + 1));
    }

    printf("Array values: ");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    int max = arr[0];
    for(int i = 0; i < SIZE; i++)
    {
        if(arr[i] % 2 == 0 && arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\nLargest even number: %d\n", max);

    float sum1 = 0;
    for(int i = 0; i < SIZE/2; i++)
    {
        sum1 = arr[i] + sum1;
    }
    float sum2 = 0;
    for(int i = SIZE/2; i < SIZE; i++)
    {
        sum2 = arr[i] + sum2;
    }
    printf("Average of first and second havles: %.2lf %.2lf\n", sum1/4, sum2/4);
    

    return 0;
}