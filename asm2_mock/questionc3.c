/*Question 3 (30 pts)
Write a program that convert a string source in the format "dd/mm/yyyy" to produces the string dest 
in the format "dd Month yyyy". You can assume that the string src is always in a correct format and 
valid.
Prompt the user to enter the source string (must read in as a string), and print out dest string after 
converting.
Note: months are from January to December, and are required to be declared and used as following:
char *months[] = {“January”, “February”, “March”, “April”, “May”, “June”, “July”, “August”, “September”, 
“October”, “November”, “December”};
Example Run:
Enter a date in dd/mm/yyyy: 06/12/2021
Converted format: 06 December 2021*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char str[10 + 1];
    printf("Enter a date in dd/mm/yyyy: ");
    scanf("%s", str);
    printf("Converted format: ");
    
    char dd[2 + 1];
    char yyyy[4 + 1];
    char mm[2 + 1];
    for(int i = 0; i < 2; i++)
    {
        dd[i] = str[i];
    }
    for(int i = 0; i < 2; i++)
    {
        mm[i] = str[i + 3];
    }
    for(int i = 0; i < 4; i++)
    {
        yyyy[i] = str[i + 6];
    }

    int value;
    value = atoi(mm);
    printf("%s %s %s", dd, month[value - 1], yyyy);
    
    return 0;
}