#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 50

int main()
{
    char names[5][SIZE];

    for(int i  = 0; i < 5; i++)
    {
        printf("Enter a full name: ");
        scanf(" %[^\n]s", names[i]);
    }
    printf("\n\n");
    #if 0
    //print out names
    for(int i = 0; i < 5; i++)
    {
        printf("%s\n", names[i]);
    }
    #endif

    //Print out first names of all people 
    printf("The first names are: ");
    for(int k = 0; k < 5; k++)
    {
        //Print out the first name of the first person 
        for(int i = 0; names[k][i] != '\0'; i++)
        {
            if(!isspace(names[k][i]))
                printf("%c", names[k][i]);
            else
                break;
        }
        if(k <= 2)
            printf(", ");
        else if(k == 3)
            printf(", and ");
    }

    //Sorting
    char temp[SIZE];
    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}