#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 225

int main()
{
    char str[SIZE];
    int i = 0;
    printf("Input a string, which may contain spaces: ");
    scanf(" %[^\n]", str);

    /*a. Calculate the length of a given string. You are not allowed to use the built-in
function strlen() in this question.*/
    while(*(str + i) != '\0')
    {
        i++;
    }
    printf("%d\n", i);


    /*b. Convert a given string to uppercase. You are not allowed to use the built-in function 
toupper() in this question.*/
    #if 0
    char *p = str;
    for(; p < str + i; p++)
    {
        if(*p >= 'a' && *p <= 'z')
        {
            *p = *p - 32;
        }
    }
    printf("%s", str);
    #endif

    /*c. Ask the user to enter a searching keyword, and text for replacement. Print out the 
string after replacement.*/
    char find[SIZE];
    printf("Find: ");
    scanf(" %[^\n]s", find);

    char replace[SIZE];
    printf("replace: ");
    scanf(" %[^\n]s", replace);

    for(int i = 0; *(str + i)!= '\0'; i++)
    {
        if(strncmp(str + i, find, strlen(find)) == 0)
        {
            strncpy(str + i, replace, strlen(replace));
        }
    }

    printf("Result: %s\n", str);
  


    return 0;
}