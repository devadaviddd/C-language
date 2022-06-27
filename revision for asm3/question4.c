#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int arr[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        printf("Enter a value for arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }


    for(int i = 0; i < SIZE - 1; i++)
    {
        for(int j = 0; j < SIZE - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }           
        }
    }
    

    for(int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    return 0;
}
