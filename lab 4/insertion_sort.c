#include <stdio.h>


int main()
{
    int arr[5] = {7, 2, 10, 8, 4}; //2 4 7 8 10
    int value;
    int hole;

    //ascending
    for(int i = 0; i < 5; i++)
    {
        value = arr[i]; 
        hole = i; 
        while(hole > 0 && arr[hole - 1] < value) 
        {
            arr[hole] = arr[hole - 1]; 
            hole = hole - 1; 
        }
        arr[hole] = value; 
    }


    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}