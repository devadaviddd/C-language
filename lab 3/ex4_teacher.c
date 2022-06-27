#include <stdio.h>

int main()
{

    //printing first line
    printf("  x |"); // printing this because x | doesnt have a pattern for running a for loop
    for(int first_row = 1; first_row <= 10; first_row++) //scan from 1 to 10 and printing it out
    {
        printf("%3d ", first_row); //3d stand for 3 spaces
    }
    printf("\n");
    

    //printing second line
    for(int space = 1; space <= 44; space++)// printing - that from 1 to 44 because there is 11 blocks and each block contains 4 dashes.
    {
        printf("-");
    }
    printf("\n");
    
    //printing remaining line because the remaning have a pattern and connection.
    for(int i = 1; i <= 10; i++) //this is repeating a rows loop inside 10 times 
    {
        printf("%3d |", i); //printing first elements of i then move to printing a rows loop.

        //printing(i * j) in rows loop with 10 elements
        for(int j = 1; j <= 10; j++)
        {
            printf("%3d ", i * j);
        }
        printf("\n");       
 
    }
    
    return 0;
}