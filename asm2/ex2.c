/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2021C
  Lab Assessment: 2
  Author: Nguyen Tuong Khang
  ID: s3927112
  Compiler used: Compiler version gcc 8.1.0
  Created  date: 12/11/2021
  Acknowledgement: Lecture slides and tutorial classes of Linh Tran.
  https://flaviocopes.com/c-array-length/#:~:text=C%20does%20not%20provide%20a%20built-in%20way%20to,this%3A%20You%20use%20a%20variable%20for%20the%20size%3A
*/
#include <stdio.h>
#include <stdlib.h>

/*a. Accept an array of integers and its size then print out all elements in reverse order*/
void reverse_order(int arr[], int size)
{
    for(int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*b. Accept an array of integers and its size then return the sum of all even numbers.
*/
int sum_of_even(int arr[], int size)
{
    int sum_of_even = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            sum_of_even = sum_of_even + arr[i];
        }
    }
    return sum_of_even;
}

/*c. Accept an array of integers, its size, and another number. Return the occurring frequency of that 
number in the array (return 0 if it is not found in the array). Require using pointer in this question.*/
int occurence_fre(int arr[], int size, int num)
{
    int cnt = 0;
    for(int *p = arr; p < arr + size; p++)
    {
        if(*p == num)
        {
            cnt++;
        }
    }
    if(cnt == 0)
    {
        return cnt = 0;
    }
    else
    {
        return cnt;
    }
}


/*d. Accept an array of integers and its size then return the most occurring value in the array. Require 
using pointer in this question.*/
int most_occurence(int arr[], int size)
{
    int cnt = 0;
    int list[size];
    for(int i = 0; i < size; i++)
    {
        for(int *p = arr; p < arr + size; p++)
        {
            if(*p == *(arr + i))
            {
                cnt++;
            }
        }
        list[i] = cnt;
        cnt = 0;
    }
    int max = list[0];
    for(int i = 0; i < size; i++)
    {
        if(list[i] > max)
        {
            max = list[i];
        }
    }
    for(int i = 0; i < size; i++)
    {
        if(list[i] == max)
        {
            return i;
        }
    }

}

int main()
{
    /*Write a function for each of the following and test by calling them in main(). You can create an array with 
some values to test them.*/
    int arr[] = {3, 8, 8, 8, 8, 8, 3, 10};
    int size = sizeof(arr)/sizeof(arr[0]);

    //a
    reverse_order(arr, size);
    //b
    printf("Sum of even numbers: %d\n", sum_of_even(arr, size));
    //c
    int num;
    printf("Enter a number to get frequency of occurence: ");
    scanf("%d", &num);
    printf("The occuring frequency of value %d in the above array is %d\n", num, occurence_fre(arr, size, num));
    //d
    int index = most_occurence(arr, size);
    printf("the most occurence is %d", arr[index]);    

    return 0;
}