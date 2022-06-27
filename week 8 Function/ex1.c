#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "array.h" //user-defined library
#define SIZE 5



int main()
{
    int arr[SIZE] = {12, 7, -3, 4, 1};

    //a) print array in normal order 
    printarray(arr, SIZE);

    //b) print array in reverse order
    print_reverse(arr, SIZE);

    //c) return the maximum element in that array
    printf("%d\n", maximum(arr, SIZE));

    //d) finding one int in or not in the array
    int another_int;
    printf("Enter another int: ");
    scanf("%d", &another_int);
    printf("%d\n", finding_int(arr, SIZE, another_int));

    return 0;
}