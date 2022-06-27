#include <stdio.h>

int main()
{
    for(int first_line = 1; first_line <= 1; first_line++)
    {
        printf("  x |");
        for(int first_row = 1; first_row <= 10; first_row++)
        {
            printf("%3d ", first_row);
        }
        printf("\n");
        //4 spaces for one/11 blocks
        
        printf("--------------------------------------------------------\n");
    }
    for(int i = 1; i <= 10; i++)
    {
        printf("%3d |", i);

        for(int j = i; j <= i * 10; j = j + i)
        {
            printf("%3d ", j);
            if(j % (i * 10) == 0)
                printf("\n");
        }       
 
    }
    
    return 0;
}