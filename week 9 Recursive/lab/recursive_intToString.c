#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 255

//function1: to get SIZE
int SIZE(int num, int size)
{
    if(num == 0)
    {
        return size;
    }
    SIZE(num / 10, size + 1);
}

//function2: to get create int arr from a int number
void Array_num(int num, int size, int *num_arr)
{
    while(num  > 0)
    {
        num_arr[size] = num % 10;
        num = num / 10;
        size++;
    }

    for(int i = 0; i < size/2; i++)
    {
        int tmp = num_arr[i];
        num_arr[i] = num_arr[size - (i + 1)];
        num_arr[size- (i + 1)] = tmp;
    }
}

//function3: to convert int to string using recursive
void convert_int_string(int num_arr[], int size, char *dest, int i)
{
    if(i == size)
    {
        return;
    }
    dest[i] = num_arr[i] + 48;
    convert_int_string(num_arr, size, dest, i + 1);
}

int main()
{
    int num;
    printf("Enter a int to convert to string: ");
    scanf("%d",&num);
   
    int num_arr[MAXSIZE];
    int size = 0;

    //call function1 and assgin value for size
    size = SIZE(num, size);

    //call function2
    Array_num(num, size, num_arr);    

    char dest[size];
    int i = 0;

    //call function3
    convert_int_string(num_arr, size, dest, i);
    printf("%s", dest);
    return 0;
}