#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    /*Assume there is an array int arr[] = {12, 7, -3, 4, 1};*/
    /*a. Print the array elements in the normal order.*/
    int arr[] = {12, 7, -3, 4, 1};
    int SIZE = sizeof(arr)/sizeof(arr[0]); //20byte/4byte --> 5
    int *p = arr; // the same with int *p = &arr[0]

    //WAY2
    printf("a. Print the array elements in the normal order: ");
    for(; p < arr + SIZE; p++)
    {
        printf("%d ", *p);
    }

    #if 0
    //WAY 3
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", *(arr + i));
    }
    #endif

    /*b. Print the array elements in the reverse order*/
    printf("\nb. Print the array elements in the reverse order: ");
    for(int *p = arr + SIZE - 1; p >= arr; p--)
    {
        printf("%d ", *p);
    }

    /*c. Calculate the sum of all elements in the array.*/
    printf("\nc. Calculate the sum of all elements in the array: ");
    int sum = 0;
    for(int *p = arr; p < arr + SIZE; p++)
    {
        sum = sum + *p;
    }
    printf("\nSum = %d\n", sum);
    
    /*d. Reverse the elements of the array, i.e. make it become [1, 4, -3, 7, 12].*/
    printf("d. Reverse the elements of the array: ");

    #if 0
    int *left, *right;
    left = arr; 
    right = arr + SIZE - 1;
    while(left < right)
    {
        int tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
    #endif

    for(int i = 0; i < SIZE/2; i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + SIZE - (i + 1));
        *(arr + SIZE - (i + 1)) = temp;
    }

    for(int *p = arr; p < arr + 5; p++)
    {
        printf("%d ", *p);
    }

    return 0;
}