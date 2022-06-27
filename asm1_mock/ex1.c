#include <stdio.h>

int main()
{
    /*Prompt the user to enter an alphanumerical character, and print out its type which is one of
    following:
    - Numerical character (0 – 9)
    - Lowercase alphabetical character (a – z)
    - UPPERCASE alphabetical character (A – Z)
    - Invalid character (if it is not alphanumerical).*/

    char alphanumerical;
    printf("Enter an alphanumerical character: ");
    alphanumerical = getchar();

    if(alphanumerical >= '0' && alphanumerical <= '9')
        printf("It is a Numerical character");
    else if(alphanumerical >= 'a' && alphanumerical <= 'z')
        printf("It is a Lowercase alphabetical character");
    else if(alphanumerical >= 'A' && alphanumerical <= 'Z')
        printf("It is an UPPERCASE alphabetical character");
    else
        printf("It is an invalid character");


    return 0;
}