#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 225 //store maximun 225 characters( the last one is '\0')

int main()
{
    /*Write a program to ask the user to input a string, which may contain spaces, then do the 
    following tasks
        a. Find the length without using library functions.*/

    char str[SIZE] = "";
    int count = 0;
    printf("Input a string: ");
    scanf(" %[^\n]", str);
    for(int i = 0; i < SIZE; i++)
    {
        if(str[i] != '\0')
            count++;
        else
            break;
    }
    printf("The length is: %d\n", count);

    /*  b. Count the number of uppercase and lowercase letters, total letters, digits, and 
    punctuations without using library functions.*/
    int count_uppercase = 0; 
    int count_digits = 0; 
    int count_punctuations = 0;
    int count_lowercase = 0;
    int count_letters = 0;

    for(int i = 0; i < SIZE; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            count_uppercase++;
            count_letters++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            count_lowercase++;
            count_letters++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
            count_digits++;
        else if((str[i] >= '!' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@') || 
                (str[i] >= '[' && str[i] <= '`') || (str[i] >= '{' && str[i] <= '~'))
            count_punctuations++;
            
    }
    printf("Number of uppercase: %d\n", count_uppercase);
    printf("Number of lowercase: %d\n", count_lowercase);
    printf("Number of letters: %d\n", count_letters);
    printf("Number of digits: %d\n", count_digits);
    printf("Number of punctuations: %d\n", count_punctuations);

    /*c. Replace the lowercase characters by uppercase and vice versa.*/
    #if 0
        for(int i = 0; i < SIZE; i++)
        {
            if(isupper(str[i]))
                str[i] = str[i] + 32;
            else if(islower(str[i]))
                str[i] = str[i] - 32;
        }
        printf("%s\n", str);
    #endif

    /*d. Reverse it without using any extra string. For example, if the user inputs "Good 
    morning" then it becomes "gnirom dog".*/
    int length = strlen(str);
    for(int i = 0; i < length/2; i++)
    {
        //Swap str[i] wit str[length - (i + 1)]
        int tmp = str[i];
        str[i] = str[length - (i + 1)];
        str[length - (i + 1)] = tmp;
    }

    
    printf("%d", length);
    printf("Reversed String: %s \n\n", str);

    return 0;
}