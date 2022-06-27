/*Write a function for each of the following and test by calling them in main(), where the input must be 
entered by the user.
a) Accept a string and return number of alphabetical characters (a-z, A-Z) in that string. (5pt)
b) Accept a string and return average value of all digits in that string (10pt).
For example, input string is "12hello34" will return value 2.5
c) Accept a string and remove all non-digit characters in that string. (5pt)
For example, input string is "12hello34" will become "1234"
d) Accept a string with date format "dd/mm/yyyy", print out number of that day within the year
(01/01 is day 1, 02/01 is day 2, 03/01 is day 3…). (10pt)*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 225


int num_of_alphabetical(char str[])
{
    int cnt = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(isalpha(str[i]))
            cnt++;
    }
    return cnt;
}

float average(char str[])
{
    float sum = 0;
    int cnt = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(isdigit(str[i]))
        {
            sum = sum + (str[i] - '0');
            cnt++;
        }
    }
    float average = (float) sum/cnt;
    if(cnt == 0)
        return 0;
    return average;
}

void remove_alphabetical(char str[])
{
    int gap = 0;
    int size_num = strlen(str) + 1;
    char num[size_num];
    int i = 0;
    for(; i < strlen(str); i++)
    {
       
        if(isdigit(str[i]))
        {
            num[i - gap] = str[i];
            printf("%c", num[i - gap]);
        }
        else
        {
            gap++;
        }
        
    }
    if(gap == strlen(str))
        printf("Cannot convert to number\n");
    else
        printf("\n");
}

char *remove_non_digit(char str[])
{
    char digit_str[SIZE];
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(isdigit(str[i]))
        {
            digit_str[j] = str[i];
            j++;
        }
    }
    digit_str[j] = '\0';
    strcpy(str, digit_str);
    return str;
}


void questiond(char date[])
{
    int dd;
    for(int i = 0;  i < 2; i++)
    {
        if(isdigit(date[i]))
            dd = dd * 10 + (date[i] - '0');
    }
    int mm;
    for(int i = 3; i < 5; i++)
    {
        if(isdigit(date[i]))
            mm = mm * 10 + (date[i] - '0');
    }
    int yyyy;
    for(int i = 5; i < 10; i++)
    {
        if(isdigit(date[i]))
            yyyy = yyyy * 10 + (date[i] - '0');
    }
    printf("%d/%d/%d\n",dd, mm, yyyy);
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(yyyy % 4 == 0 ||(yyyy % 100 != 0 || yyyy % 400 == 0))
    {
        month[1] = 29;
    }
    int day;
    for(int i = 1; i < mm; i++)
    {
        day = day + month[i]; 
    }
    day = dd + day;
    if(dd < 10)
        printf("0");
    printf("%d/", dd);
    if(mm < 10)
        printf("0");
    printf("%d/", mm);
    printf(" is day %d", day);
}


int main()
{
    char str[SIZE];
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);

    //a
    printf("Number of alphabetical: %d\n",num_of_alphabetical(str));
    //b
    if(average(str) ==  0)
        printf("Cannot calculate average number\n");
    else
        printf("Average number: %.2lf\n", average(str));
    //c
    //remove_alphabetical(str); 
    remove_non_digit(str);
    printf("%s\n", str);

    //d
    char date[10];
    printf("Enter a date with format dd/mm/yyyy: ");
    scanf(" %[^\n]s", date);   
    questiond(date);
    return 0;
}