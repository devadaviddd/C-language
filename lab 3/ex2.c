#include <stdio.h>

/*Get a sequence of positive integers from the user and compute their sum. The sequence 
ends when the user enters a negative number. The sum should not include the negative 
number at the end of the sequence. How many positive numbers are there in the 
sequence?
*/
int main()
{
    int num = 0; //initial first value of num is 0 
    int count_positive = 0;
    int sum = 0;

    //set constraint of num is 0 and  positive integer
    while(num >= 0)
    {
        printf("Enter a positive integer: ");
        scanf("%d", &num);

        //set constraint of num is positive integer then update sum of these positive integers. Each time sum updated we are counting it.
        if(num > 0)
        {
            sum = sum + num;
            count_positive++;
        }
    }

    printf("Sum is %d\n", sum);
    printf("There are %d positive integers", count_positive);

    return 0;
}