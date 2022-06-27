#include <stdio.h>

int main()
{
    /*7. Assume that there is an array as follow:
    char arr[] = {'R', 'M', 'I', 'T', 'U', 'n', 'i', 'v', 'e', 'r', 's',
    'i', 't', 'y'};
    Sort the array using the insertion sort algorithm then print the array out in both ascending
    and descending order.*/

    char arr[] = {'R', 'M', 'I','T', 'U', 'n', 'i','v', 'e', 'r', 's', 'i', 't', 'y'};
    char values;
    char holes;

    //ascending
    for(int i = 0; i <= 13; i++)
    {
        values = arr[i];
        holes = i;

        while(holes > 0 && arr[holes - 1] > arr[holes])
        {
            arr[holes] = arr[holes - 1];
            holes--;
        }

        arr[holes] = values;
    }

    for(int i = 0; i <= 13; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");


    return 0;
}