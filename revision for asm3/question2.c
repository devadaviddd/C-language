#include <stdio.h>

int main()
{
    int x = 1;

    printf("%s%c %c %c\n", 
        x ? "" : "NOT",
        "hello"[1], //e
        *("abcd" + 2), //c //address of character c
        *"1234" + 3); //4
    
    return 0;
}