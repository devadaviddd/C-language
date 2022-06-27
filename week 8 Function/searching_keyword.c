#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 225


int finding(char text[], char searching_keyword[])
{
    for(int i = 0; i != '\0'; i++)
    {
        int searching_index = 0;
        int text_index = i;

        while(searching_keyword[searching_index] == text[text_index])
        {
            searching_index++;
            text_index++;
            if(searching_keyword[searching_index] == '\0')
            {
                break;
            }
        }
        return 0;
    }
    return 1;
}


int main()
{
    char text[SIZE];
    char searching_keyword[SIZE];
    printf("Enter a text: ");
    scanf(" %[^\n]", text);
    printf("Enter a searching keyword:");
    scanf(" %[^\n]", searching_keyword);

    printf("%d", finding(text, searching_keyword));

    


    return 0;
}