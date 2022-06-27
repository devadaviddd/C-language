#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    /*  Assume that the full name is written in the form of first name, middle name (optional), last 
        name. Example: Minh Van Nguyen. 
        a. Get 5 full names then find the first names and print them out in one line as below.
        b. Sort the full names in alphabetical order.
        Here is a sample run:
        Enter full name 1: John Doe
        Enter full name 2: Andrew Smith
        Enter full name 3: Mike James Austin
        Enter full name 4: Duy Thien Pham Dang
        Enter full name 5: Minh Ngoc Dinh
        The first names are John, Andrew, Mike, Duy, and Minh.
        Sorted names:
        Andrew Smith
        Duy Thien Pham Dang
        John Doe
        Mike James Austin
        Minh Ngoc Dinh */

    int count = 0;
    int count_space = 0;
    int index_last_space[5] = {0, 0, 0, 0, 0};
    int max;
    char names[5][255];
    while(count < 5)
    {
        printf("Enter full name %d: ", count + 1);
        scanf(" %[^\n]", names[count]);
        count++;
    }

    //Printing Last Name
    #if 0
        for(int i = 0; i < count; i++)
        {
            for(int j = 0; names[i][j] != '\0'; j++)
            {
                if(names[i][j] == 32)
                {
                index_last_space[i] = j;
                }
            }
        }

        for(int i = 0; i < 5; i++)
        {
            if(index_last_space[i] == 0)
                index_last_space[i] = -1;
        }

        printf("The first names are  ");
        for(int i = 0; i < 5; i++)
        {
            if(i == 4)
                printf("and ");
            for(int j = index_last_space[i] + 1; names[i][j] != '\0'; j++)
            {
                if(i == 4)
                    printf("%c", names[i][j]);
                else
                    printf("%c", names[i][j]);
            }
            if(i == 4)
                printf(".\n");
            else
                printf(", ");
        }
    #endif

    //printing first name
    printf("The first names are ");
    for(int i = 0; i < 5; i++)
    {
        if(i == 4)
            printf("and ");
        for(int j = 0; names[i][j] != '\0'; j++)
        {
            if(names[i][j] == 32)
                break;
            else
                printf("%c", names[i][j]);
        }
        if(i == 4)
            printf(".\n");
        else
            printf(", ");
    }

    //sorted
    /*Sorted names:
        Andrew Smith
        Duy Thien Pham Dang
        John Doe
        Mike James Austin
        Minh Ngoc Dinh */
    char temp;

    for(int sort_i = 0; sort_i < 4; sort_i++)
    {
        for(int sort_j = 0; sort_j < 4; sort_j++)
        {
            if(names[sort_j][0] > names[sort_j + 1][0])
            {   
                for(int i = 0; i < 5; i++)
                {
                    for(int j = 0; names[i][j] != '\0'; j++)
                    {
                        temp = names[sort_j][j];
                        names[sort_j][j] = names[sort_j + 1][j];
                        names[sort_j + 1][j] = temp;
                    }
                }
            }
        
        }
    }
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; names[i][j] != '\0'; j++)
        {
            printf("%c", names[i][j]);
        }
        printf("\n");
    }
    return 0;
}
