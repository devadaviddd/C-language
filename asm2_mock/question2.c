#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_half(int arr[], int SIZE)
{
    for(int *p = arr ; p < arr + SIZE/2; p++)
    {
        printf("%d ", *p);
    }
    printf("\n");
}

int min(int arr[], int SIZE)
{
    int min = arr[0];
    for(int *p = arr; p < arr + SIZE; p++)
    {
        if(*p < min)
        {
            min = *p; 
        }
    }
    return min;
}

void absolute(int arr[], int SIZE, int number)
{
    int difference;

    int difference_init = abs(number - arr[0]);
    for(int i = 0; i < SIZE; i++)
    {
        difference = abs(number - arr[i]);
        if(difference_init < difference)
        {
            difference = difference_init;
        }
    }
    int positive;
    int negative;
    positive = number + difference;
    negative = number - difference;

    printf("The closet element with that number is: ");
    for(int i = 0; i < SIZE; i++)
    {
        if(positive == arr[i])
        {
            printf(" %d", positive);
        }
        else if(negative == arr[i])
        {
            printf(" %d", negative);
        }
    }
}

float average(int arr[], int SIZE)
{
    int sum = 0;
    for(int *p = arr; p < arr + SIZE; p++)
    {
        sum = sum + *p;
    }
    float average =  (float)sum/SIZE;
    return average;
}

int main()
{
    int const SIZE;
    int element = 1;
    int value;
    printf("Enter a SIZE for array: ");
    scanf("%d", &SIZE);
    int arr[SIZE];
    
    for(int i = 0; i < SIZE; i++)
    {
        printf("Enter a value for element %d: ", element);
        scanf("%d", &value);
        arr[i] = value;
        element++;

    }

    /*a. Accept an array of integers and its size then print out the first half of the array (excluding the middle 
element if there is odd number of elements). Require to use pointer in this question.*/
    print_half(arr, SIZE);

    /*b. Accept an array of integers and its size then return the minimum element in that array.*/
    printf("The minmum element of this array is %d\n", min(arr, SIZE));

    /*c. Accept an array of integers and its size then return their average value with two digits of precision 
(after decimal point). Require to use pointer in this question.*/
    printf("The average is %.2f\n", average(arr, SIZE));


    /*d. Accept an array of integers, its size, and another number. Find the closet element with that number 
(which has minimum difference) within the array.*/
    int number;
    printf("Input a number: ");
    scanf("%d", &number);
    absolute(arr, SIZE, number);

    return 0;
}