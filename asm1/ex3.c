/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2021C
  Lab Assessment: 1
  Author: Nguyen Tuong Khang
  ID: s3927112
  Compiler used: Compiler version gcc 8.1.0
  Created  date: 13/11/2021
  Acknowledgement: List the resources that you use to complete this assessment (e.g. your lecture sidles).
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //a. Create an array of 20 integers which are random integers between 40 and 200.
    srand(time(NULL)); //create seed
    int const SIZE = 20; //create constant SIZE

    int arr[SIZE];
    int range1 = 40;
    int range2 = 200;
    int value = 0;
    int count = 0;
    int largest = 0;
   
    for(int i = 0; i < SIZE; i++)
    {
        value = range1 + (rand() % (range2/2 + 1)); //formula to printing out random values in range between 40 (range 1) and 200 (range 2)
        arr[i] = value;
        printf("%d ", arr[i]);      
    }
    printf("\n");

    //b. Print out all elements which is divisible by 5. How many of them are there ?
    printf("Print them out in one line: ");
    for(int i = 0; i < SIZE; i++) 
    {
        if(arr[i] % 5 == 0)
        {
            printf("%d ", arr[i]); //print it if condition is true and each time count = count + 1
            count++;
        }        
    }
    printf("\nThere are %d elements divisible by 5\n", count);
    
    //c.Using only one loop, print all 20 integers from the first element to the last element in 10 rows(02 elements per row)
    //d. At the end of each column, print out the largest value of the column.
    int largest_second_column = arr[1]; // the second for index i % 2 != 0
    int largest_first_column = arr[0]; // the first for index i % 2 == 0
    for(int i = 0; i < SIZE; i++)
    {
        printf("%3d ", arr[i]);
        if(i % 2 != 0) //i start from 0 to SIZE then i % 2 != 0 the next element or i + 1 will printing new line
        {
            printf("\n");
            if(arr[i] > largest_second_column) //if arr[i] > than initial value of largest_second_column --> update largest_second_column = arr[i]
            {
                largest_second_column = arr[i];
            }
        }
        else if(i % 2 == 0) // else of the condition above wrong
        {
            if(arr[i] > largest_first_column) //if arr[i] > than initial value of largest_first_column --> update largest_second_column = arr[i]
            {
                largest_first_column = arr[i];
            }
        }
    }
    printf("Largest value of column1: %d\n", largest_first_column);
    printf("Largest value of column2: %d\n", largest_second_column);
    return 0;
}