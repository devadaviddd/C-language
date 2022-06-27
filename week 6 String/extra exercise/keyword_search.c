#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char search_names[3][50];
    char search_keywords[50];


    for(int i = 0; i < 3; i++)
    {
        printf("Enter full name %d: ", i+1);
        scanf(" %[^\n]s", search_names[i]);
    }

    printf("Enter a search keyword: ");
    scanf(" %[^\n]s", search_keywords);
    
    printf("The matched names:\n");
    for(int i = 0; i < 3; i++)
    {
        if(strstr(search_names[i], search_keywords))
            printf("%s\n", search_names[i]);
    }

    char replacement[50];
    printf("Enter a replacement keyword: ");
    scanf(" %[^\n]s", replacement);
    strcpy(search_keywords, replacement);

    printf("The matched names:\n");
    for(int i = 0; i < 3; i++)
    {
        if(strstr(search_names[i], search_keywords))
            printf("%s\n", search_names[i]);
    }

    return 0;
}