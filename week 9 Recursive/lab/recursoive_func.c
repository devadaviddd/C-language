#include <stdio.h>
#include <stdlib.h>

int sum_of_integers(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n  + sum_of_integers(n - 1);
}

//print for int_arr
void print_int_arr(int arr[], int size)
{
    if(size == 0)
    {
        return;
    }
    printf("%d ",arr[0]);
    print_int_arr(arr + 1, size - 1);

}

//print for char_arr
void print_char_arr(char str[])
{
    if(*str == 0)
    {
        return;
    }
    printf("%c ", str[0]);
    print_char_arr(str + 1);
}

int digits(int num)
{
    int cnt = 0;
    while(num > 0)
    {
        num = num / 10;
        cnt++;
    }
    return cnt;
}

void convert_int_string(int num_arr[], int count, char dest[], int i)
{
    if(i == count)
    {
        return;
    }
    printf("%c", dest[i] = num_arr[i] + 48);
    convert_int_string(num_arr, count, dest, i + 1);
}


int main()
{
    /*a) Write a function which calculates the sum of integers from 1 to n using recursion*/
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("The sum of intergers from 1 to %d is: %d\n", n, sum_of_integers(n));

    /*b) Write a function which prints the array element using recursion.*/
    int arr[5] = {1, 2, 3, 4 ,5};
    int size = 5;
    print_int_arr(arr, size);
    printf("\n");

    char str[5] = "abcd";
    print_char_arr(str);
    printf("\n");

    /*c) Write a function which converts an integer into a string using recursion.
Test in main(): user inputs an integer (read in as int), then call the function and print 
it out as a string*/
    int num;
    printf("Enter a int to convert to string: ");
    scanf("%d",&num);
    
    int num_arr[50];
    int count = 0;
    while(num  > 0)
    {
        num_arr[count] = num % 10;
        num = num / 10;
        count++;
    }
    for(int i = 0; i < count/2; i++)
    {
        int tmp = num_arr[i];
        num_arr[i] = num_arr[count - (i + 1)];
        num_arr[count- (i + 1)] = tmp;
    }
    for(int i = 0; i <= count - 1; i++)
    {
        printf("%d ", num_arr[i]);
    }
    char dest[count];
    int i = 0;
    convert_int_string(num_arr, count, dest, i);

    printf("\n");
    
    return 0;
}