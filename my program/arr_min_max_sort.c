#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size;
    int element = 1;
    int value;
    int hole;
    int algorithm;

    do
    {
        printf("Enter the size of an array: ");
        scanf("%d", &size);
    } while(size < 1);

    int arr[size];
    
    //Enter value for your array
    for(int i = 0; i < size; i++)
    {
        printf("Enter a value for element %d: ", element);
        scanf("%d", &value);
        arr[i] = value;
        element++;
    }
    printf("Your arr[%d] = ", size);
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    //Finding max and min of that array
    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    printf("Max of that array is %d and Min of that array is %d\n", max, min);

    //Sorting that array
    do
    {
        printf("Choosing your sorting algorithm. 0 for selection sort| 1 for bubble sort| 2 for insertion sort:  ");
        scanf("%d", &algorithm);
    } while(algorithm < 0 || algorithm > 2);
    switch(algorithm)
    {
        //Selection sorting
        case 0:
            //Descending
            for(int i = 0; i < size - 1; i++)
            {
                for(int j = i; j < size; j++)
                {
                    if(arr[i] < arr[j])
                    {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }   
                }
            }
            printf("Descending: ");
            for(int i = 0; i < size; i++)
                printf("%d ", arr[i]);
            printf("\n");    
            //Ascending
            for(int i = 0; i < size; i++)
            {
                for(int j = i; j < size; j++)
                {
                    if(arr[i] > arr[j])
                    {
                        int temp = arr[j];
                        arr[j] = arr[i];
                        arr[i] = temp;
                    }
                }
            }
            printf("Ascending : ");
            for(int i = 0; i < size; i++)
                printf("%d ", arr[i]);
            break;

        //Bubble sorting    
        case 1:
            //Descending
            for(int i = 0; i < size - 1; i++)
            {
                for(int j = 0; j < size - 1; j++)
                {
                    if(arr[j] < arr[j + 1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            printf("Descending: ");
            for(int i = 0; i < size; i++)
                printf("%d ", arr[i]);
            printf("\n");
            //Ascending
            for(int i = 0; i < size - 1; i++)
            {
                for(int j = 0; j < size - 1; j++)
                {
                    if(arr[j] > arr[j + 1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            printf("Ascending : ");
            for(int i = 0; i < size; i++)
                printf("%d ", arr[i]);
            printf("\n");
            break;

        //insertion sort
        case 2:
            //Descending
            for(int i = 0; i < size; i++)
            {
                value = arr[i]; 
                hole = i - 1; 
                while(hole >= 0 && arr[hole] < value) 
                {
                    arr[hole + 1] = arr[hole]; 
                    hole = hole - 1; 
                }
                arr[hole + 1] = value; 
            }
            printf("Descending: ");
            for(int i = 0; i < size; i++)
                printf("%d ", arr[i]);
            printf("\n");
            //Ascending
            for(int i = 0; i < size; i++)
            {
                value = arr[i];
                hole = i - 1;
                while(hole >= 0 && arr[hole] > value)
                {
                    arr[hole + 1] = arr[hole];
                    hole--;
                }
                arr[hole + 1] = value; 
            }
            printf("Ascending : ");
            for(int i = 0; i < size; i++)
                printf("%d ", arr[i]);
            printf("\n");
            break;
    }
           
    return 0;
}