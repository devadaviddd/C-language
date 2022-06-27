#include <stdio.h>
#include <stdlib.h>

int main()
{
    int line;
    do{
        printf("Enter a number (1 - 10): ");
        scanf("%d", &line);
        if(!(line >= 1 && line <= 10))
            printf("Invalid number !\n");
    } while(!(line >= 1 && line <= 10));

    //line 1
    printf(" x | ");
    for(int i = 1; i <= line; i++)
        printf("%2d ", i);
    
    //line 2
    printf("\n");
    for(int i = 1; i <= line; i++)
        printf("----");
    
    //lines below
    printf("\n");
    for(int i = 1; i <= line; i++)
    {
        printf("%2d | ", i);
        for(int j = 1; j <= line; j++)
        {
            printf("%2d ", j * i);
        }
        printf("\n");
    }

    return 0;
}