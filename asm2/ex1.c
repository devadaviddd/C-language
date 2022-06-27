/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2021C
  Lab Assessment: 2
  Author: Nguyen Tuong Khang
  ID: s3927112
  Compiler used: Compiler version gcc 8.1.0
  Created  date: 12/11/2021
  Acknowledgement: Lecture slides and tutorial classes of Linh Tran.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50


int main()
{
    /*Write a program to ask the user to input a string, which may contain spaces, print out only vowers ('a', 'e', 'i', 
'o', and 'u') in that string while replacing other characters by blank space.*/
    char str[SIZE];
    printf("Input a string: ");
    scanf("%[^\n]", str);

    for(int i = 0; i < SIZE; i++)
    {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' 
            && str[i] != 'o' && str[i] != 'u')
        {
            str[i] = ' ';
        }
    }

    printf("Vowers: %s", str);

    return 0;
}