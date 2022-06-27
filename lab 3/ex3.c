#include <stdio.h>
/*Display the characters in the ASCII Table from '!' to '~' nicely as below. There are 15
characters per line. The characters are separated by one space.*/

int main()
{
    //33 -> 126
    char character;
    int gap = 0;
    for(int i = 33; i <= 126; i++)
    {
        character = i;
        printf("%c ", character);
        gap++;
        if(gap % 15 == 0) 
            printf("\n");

    }

    return 0;
}