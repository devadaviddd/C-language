#include <stdio.h>

/*6.Prompt the user to enteran integer between1 and15 inclusively thendisplay a pyramidaccordinglyas shown in the belowsample. 
If the user enters an integer outside of 1 to 15, the program repeatedly asksthe user to re-enter until the input falls in therange. 
Here is a sample run:*/

int main()
{
    int lines;
    
    //set a constraint that the number of lines between 1 and 15. If wrong cannot out the loop.
    do
    {
        printf("Enter the number of lines: ");
        scanf("%d", &lines);
    } 
    while(lines < 1 || lines > 15);


    for(int i = 1; i <= lines; i++) //setting i equal number of lines
    {
        for(int space = 1; space <= lines - i; space++) //printing space-- depend on the number of i at that iteration.
        {
            printf("   "); //setting 3 spaces because we using 2d + the space after that.
        }
        for(int j = i; j >= 1; j--) //printing the first pattern with j depend on i at that iteration
            printf("%2d ", j);

        for(int z = 2; z <= i; z++) //printing the second pattern with z equal 2 because j stop at 1. Then z++ with the condition that depend on i.
            printf("%2d ", z);

        printf("\n");
    }

    return 0;
}