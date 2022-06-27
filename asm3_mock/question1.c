/*Ask the user to input a positive number n. Create an array of 10 integers with values are random 
numbers from 0 to n, then sort the array in ascending order and print it out.
Assume that the user always input valid number.
Sample Run
Enter a number: 100
Array values: 77 68 13 39 69 74 33 95 42 89
Sorted array values: 13 33 39 42 68 69 74 77 89 95*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
    srand(time(NULL));
    int arr[SIZE];
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % n;
    }

    printf("Array values: ");
    for(int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    printf("\nSorted array values: ");
    for(int i = 0; i < SIZE; i++)
    {
        int value = arr[i];
        int hole = i - 1;
        while(hole >= 0 && arr[hole] > value)
        {
            arr[hole + 1] = arr[hole];
            hole--;
        }
        arr[hole + 1] = value;
    }
    for(int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    return 0;

}