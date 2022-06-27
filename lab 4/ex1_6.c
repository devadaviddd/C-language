#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*1. Create an array of 10 random integers between 50 and 100 inclusively*/
    srand(time(NULL));

    int const SIZE = 10;

    int arr[SIZE];
    int range1 = 50;
    int range2 = 100;
    int count = 0;
    int temp = 0;
    int num;
   
    /**2. Print the first to the last element of the array in one line.*/
    for(int i = 0; i < SIZE; i++)
    {
        num = range1 + (rand() % (range2/2 + 1));
        // arr[i] = range1 + (rand() % (range2/2 + 1));
        arr[i] = num;
        printf("%d ", arr[i]);
    }
    printf("\n");

    /*3. Print the last to the first element of the array in one line.*/
    for(int i = SIZE - 1 ; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    /*4. How many elements greater than 80 are there in the array? Print them out in one line.*/
    for(int i = 0; i < SIZE; i++) //printf from 0 to 9.
    {
        if(arr[i] > 80)
            count++;        
    }
    printf("There are %d elements greater than 80\n", count);
    printf("Print them out in one line: ");
    for(int i = 0; i < SIZE; i++)
    {
        if(arr[i] > 80)
            printf("%d ", arr[i]);
    }
    printf("\n");

    /*5. What is the smallest element in the array?*/
    int min = arr[0];

    for(int i = 0; i < SIZE; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    printf("The smallest element in this array: %d\n", min);

    /*6. Sort the array in ascending order using the bubble sort algorithm then print the array.*/
    for(int i = 1; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }



    return 0;
}
