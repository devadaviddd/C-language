#include <stdio.h>

int main()
{   
    int const SIZE = 5;
    int arr[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        printf("Enter a value for arr[%d] = ", i);
        scanf("%d", &arr[i]);        
    }

    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    //Sorting sort



    return 0;
}