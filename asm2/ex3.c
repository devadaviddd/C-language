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
  https://flaviocopes.com/c-array-length/#:~:text=C%20does%20not%20provide%20a%20built-in%20way%20to,this%3A%20You%20use%20a%20variable%20for%20the%20size%3A
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define SIZE 50

#if 0
int main()
{
    /*Write a program to prompt the user to input a student number and full name as below (must read in as a
string).
*/
    char str[SIZE]; 
    printf("Input a student number and name:");
    scanf("%[^\n]", str);


    int sum = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 48 && str[i] <= 57)
        {
            sum = sum + (str[i] - 48);
        }
    }

    printf("Sum of digits: %d\n", sum);
    

    /*b) Print out name in short (initials of first and middle name following by last name).
Name in short: M. V. Nguyen*/
    int uppercase = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            uppercase++;
        }
    }
  
    int found = 0;
    int cnt = 0;
    printf("Name in short:");
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            found = 1;
            cnt++;
        }

        if(found == 1 && cnt < uppercase)
        {
            printf("%c. ", str[i]);
            found = 0;
        }
        else if(cnt >= uppercase)
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}
#endif

/*Write a program to prompt the user to input a student number and full name as below (must read in as a
string).*/
int main()
{
    /*Example: Input a student number and name: s3915345 Minh Van Nguyen*/
    char str[SIZE];
    printf("Enter student number and full name: ");
    scanf(" %[^\n]", str);

    int sum = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(isdigit(str[i]))
        {
            int num = str[i] - '0';
            sum = num + sum;
        }
    }

    printf("Sum of digits: %d\n", sum);
    /*b) Print out name in short (initials of first and middle name following by last name).
Name in short: M. V. Nguyen*/

    //check captital
    int max_upper = 0;
    int index = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(isupper(str[i]))
        {
            max_upper++;
            index = i;
        }
    }
    printf("%d\n", max_upper);
    printf("Index: %d\n", index);
    int cnt = 0;
    int j = 0;
    char name_short[SIZE];
    for(int i = 0; i < strlen(str); i++)
    {
        if(isupper(str[i]))
        {
            if(cnt == max_upper - 1)
            {
                break;
            }
            else
            {
                name_short[j] = str[i];
                name_short[j + 1] = '.';
                name_short[j + 2] = ' ';
                j = j + 3;
            }
            cnt++;
        }
    }
    printf("%d\n", j);

    for(int i = index; i < strlen(str); i++)
    {
        name_short[j] = str[i];
        j++;
    }
    name_short[j] = '\0';
    
    printf("%s\n", name_short);

    return 0;
}

