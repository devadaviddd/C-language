/*3. Name List Sorting
Assume that the full name is written in the form of first name, middle name (optional), last 
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
Minh Ngoc Dinh
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char name[5][255];
    for(int i=0; i<5; i++)
    {
        printf("Enter full name %d: ", i + 1);
        scanf(" %[^\n]s", name[i]);
    }

    printf("The firsts names are ");
    for(int i=0; i<5; i++)
    {
        for(int j = 0; j < strlen(name[i]); j++)
        {
            printf("%c", name[i][j]);
            if(isspace(name[i][j]))
            { 
                break;
            }
        }
        if(i <= 2)
            printf(", ");
        else if(i == 3)
            printf(", and ");
    }

    char temp[255];
    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%s\n", name[i]);
    }
    
    
    return 0;
}