#include <stdio.h>

//a) print array in normal order 
void printarray(int arr[], int size)
{
    printf("Print array elements in normal order:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");        
}

//b) print array in reverse order
void print_reverse(int arr[], int size)
{
    printf("Print array elements in reverse order:\n");
    for(int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//c) return the maximum element in that array
int maximum(int arr[], int size)
{
    int max = arr[size];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int finding_int(int arr[], int size, int another_int)
{
    for(int i = 0; i < size; i++)
    {
        if(another_int == arr[i])
        {
            return 1;
        }
    }
    return 0;
}


