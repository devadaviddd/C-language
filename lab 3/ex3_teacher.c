#include <stdio.h>

int main()
{
    char ch;
    int cnt = 0;

    //scan from ! to ~
    for(ch = '!'; ch <= '~';ch++)
    {
        printf("%c ", ch);
        cnt++;

        //the 15th position of ch will print a new line
        if((cnt % 15) == 0)
            printf("\n");
    }

    return 0;
}