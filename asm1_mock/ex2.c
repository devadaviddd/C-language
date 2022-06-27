#include <stdio.h>

int main()
{
    /*a. Write a program that prompts the user to enter an integer between 1 and 10 inclusively
    then nicely displays a pattern as shown below.
    If the user enters an integer outside of 1 to 10, the program prints out an error message
    then repeatedly asks the user to re-enter until the integer falls in the range.*/

    int line;
    int z;
    int count = 1;
    do
    {
        printf("Enter a number (1 - 15): ");
        scanf("%d", &line);
    } while( line < 1 || line > 15);
    

    /*Modify the program above that, if the input number is between 8 and 10, the pattern
    become like below (otherwise, it is still displayed as in question a):*/
    if(line >= 8 && line <= 10)
    {
        for(int i = 1; i <= line; i++)
        {
            if(i == 1)
            {
                for(int j = i; j <= line; j++)
                {
                    printf("%2d ", j);
                }
                printf("\n");
            }
            else
            {
                for(z = i; z >= 1; z--)
                {
                    printf("%2d ", z);
                }
                for(int space = line - i; space >= 1; space--)
                {
                    if(space == 1)
                    {
                        printf("%2d ", line - count);
                        count++;
                    }
                    else
                        printf("   ");
                }
                printf("\n");
            }
        }
    }
    else
    {
        for(int i = 1; i <= line; i++)
        {
            for(int j = i; j >= 1; j--)
            {
                printf("%2d ", j);
            }
            printf("\n");
        }
    }

    return 0;
}