#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    //print all ASCII characters

    printf("%3s%10s%10s\n", "Dec", "Char", "Type");

    for(int i = 0; i <= 127; i++)
    {
        printf("%3d%10c", i, i);
        if(isalpha(i))
        {
            printf("%10s", "letter");
        }
        else if(isdigit(i))
        {
            printf("%10s", "digit");
        }
        else if(ispunct(i))
        {
            printf("%10s", "punct");
        }
        else if(isspace(i))
        {
            printf("%10s", "space");
        }
        else if(iscntrl(i))
        {
            printf("%10s", "control");
        }
        else
        {
            printf("%10s", "other");
        }
        printf("\n");
    }

    //Two equivalent ways to declare the same string
    char s1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char s2[] = "Hello";

    //print characters as decimal integers and characters
    printf("%5s%5s%5s%5s\n", "Dec", "Char", "Dec", "Char");
    for(int i = 0; i < 6; i++)
    {
        printf("%5d%5c%5d%5c\n", s1[i], s1[i], s2[i], s2[i]);
        printf("\n");
    }

    /*I/O FUNCTIONS*/
    //printf return the number of characters successfully written or a negative value of error
    printf("EOF is %d\n", EOF);

    //Read a character from stdin
    printf("Enter a character: ");
    int char1 = getchar();
    //Write a character to stdout
    putchar(char1);
    printf("\n");
    // char a;
    // printf("Enter a character: ");
    // scanf("%c", &a);

    //Read and write a string 
    char name[20];
    printf("Enter your name: ");
    scanf(" %[^\n]s", name);
    printf("My name is %s\n", name);

    /*<STRING.h>*/
    //Find out string's length
    char string1[] = "Apple";
    char string2[] = "Pineapple";

    printf("%s's length is %lu\n", string1, strlen(string1));
    printf("%s's length is %lu\n", string2, strlen(string2));
    printf("%s's length is %lu\n", name, strlen(name));

    //Compare two strings: Return 0 if they are the same, negative s1 < s2, positive s1 > s2
    printf("The result of %s compare to %s is %d\n", string1, string2, strcmp(string1, string2));

    //Copy string
    char s3[20];
    strcpy(s3, name);
    printf("s3 is %s\n", s3);

    /*ARRAY OF STRINGS*/
    //Create an array of strings 
    char names[3][20] = {
        "Roger Federer",
        "David Beckham",
        "Tiger Woods"
    };
    for(int i = 0; i < 3; i++)
    {
        printf("%s\n", names[i]);
    }

    /*Get three full names and a search keyword. Find and print the full names 
    containing the search keyword. Assume that each full name has maximum 
    50 characters. Here is a sample run:*/
    char search_names[3][50];
    char search_keywords[50];

    for(int i = 0; i < 3; i++)
    {
        printf("Enter full name %d: ", i+1);
        scanf(" %[^\n]s", search_names[i]);
    }

    printf("Enter a search keyword: ");
    scanf(" %[^\n]s", search_keywords);

    for(int i = 0; i < 3; i++)
    {
        if(strstr(search_names[i], search_keywords))
            printf("%s\n", search_names[i]);
    }
   
    
    return 0;
}