#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    /*Write a program to perform the following tasks:
    a. Create an array of 20 random integers between 0 and 100 to represent the marks of a lab
    assessment.
    b. Print all 20 marks in two lines, 10 marks per line.
    c. Print all marks between 50 and 100. How many of them are there?
    Note: It is required to have user-friendly messages when asking the user for inputs and
    presenting the outputs of your programs. */

    srand(time(NULL));
    int size = 20;
    int num;
    int count = 0;
    int arr[size];
    
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % 101;

        printf("%3d ", arr[i]);
        if(i % 10 == 9)
            printf("\n");                         
    }

    for(int i = 0; i < size; i++)
    {
        if(arr[i] >= 50 && arr[i] <= 100)
        {
            printf("%3d ", arr[i]);
            count = count + 1;
        }
    }
    printf("\n");
    printf("%d", count);


    return 0;
}