#include <stdio.h>

/*5.Prompt  the  user  to  enter  an  integer between1 and15  and  displays  a  pyramid like  the below example. 
Assume that the user always entersan integer between 1 and 15.*/

int main()
{
    int lines;
    printf("Enter the number of lines: ");
    scanf("%d", &lines);

    for(int i = lines; i >= 1; i--)
    {
        //printing j-- to 1.
        for(int j = i; j >= 1; j--) //j <-- i because in the first column the value of i equal to j then start printing from j we are start priting from i 
            printf("%2d ", j);

        //printing z++ from 2 to the number of j <-- i.
        for(int z = 2; z <= i; z++)
            printf("%2d ", z);

        printf("\n");
    }
    
    return 0;
}