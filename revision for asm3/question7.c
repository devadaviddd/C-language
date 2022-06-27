/*7. Write a recursive function that takes an array of integers as parameters and returns the sum 
of the elements in the array.*/
#include <stdio.h>
#include <stdlib.h>

int sum(int arr[], int SIZE)
{
    int result = 0;
    int index = SIZE - 1;
    if(index == 0)
    {
        return result = arr[index];
    }
    return result = sum(arr, SIZE - 1) + arr[index];
    
}


int main()
{
    int SIZE;
    printf("Enter a size: ");
    scanf("%d", &SIZE);

    int arr[SIZE];
    for(int i=0; i< SIZE; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("%d ", sum(arr, SIZE));
    return 0;
}