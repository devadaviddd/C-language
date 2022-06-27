#include <string.h>
#include <stdio.h>

int main()
{
    char str[60] = "This is--www.tutorialspoint.com--website";
    char *token[10];

    /*get the first token*/
    token[0] = strtok(str, "--");
    printf("%s \n", token[0]);

    /*get other tokens one by one*/
    int i = 0;
    while(1)
    {
        i++;
        token[i] = strtok(NULL, "--");
        if(token[i] != NULL)
        {
            printf("%s\n", token[i]);
        }
        else
        {
            break;
        }
    }
    printf("%d ", strlen(token[2])); 
    return 0;
}
