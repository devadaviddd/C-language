#include <stdio.h>

/*. Get a final result of a course as a float between 0 and 100 inclusively, then print the final 
grade for that course based on the below table. If the user enters a final result smaller 0 
or greater than 100, print an error message and keep on asking the user to re-enter again 
until the final result is eventually between 0 and 100.*/

int main()
{
    int result;

    //Check constraint of result if result between 0 and 100 then could out the while loop.
    do
    {   
        printf("Enter your result between 0 and 100: ");
        scanf("%d", &result);
    } while (result < 0 || result > 100);


    //Check condition of result between which range with it specific printf
    if(result < 50)
        printf("%d is NN", result);
    else if(result >= 50 && result < 60)
        printf("%d is PA", result);
    else if(result >= 60 && result < 70)
        printf("%d is CR", result);
    else if(result >= 70 && result < 80)
        printf("%d is DI", result);
    else
        printf("%d is HD", result);
    
        
    return 0;
}