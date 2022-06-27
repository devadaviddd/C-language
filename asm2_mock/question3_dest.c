#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main()
{
    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char str[SIZE];
    char dest[SIZE];
    printf("Enter a date in dd/mm/yyyy: ");
    scanf("%s", str);
    printf("Converted format: ");

    //copy dd
    int i; 
    for(i = 0; i <= 1; i++) 
    {
        dest[i] = str[i];
    }
    dest[2] = ' ';

    int month_value = (str[3] - '0') * 10 + (str[4] - '0');
    strcpy(dest + 3, month[month_value - 1]);
    dest[3 +  strlen(month[month_value - 1])] = ' ';
    
    strncpy(dest + 4 + strlen(month[month_value - 1]), str + 6, 4);
    printf("%s", dest);

    return 0;
}