#include <stdio.h>
#include <string.h>
#define SIZE 50

int main()
{
    char str[SIZE];
    printf("Enter a string: ");
    scanf("%s", str);
    int size = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        size++;
    }
    printf("%d", size);

    

    return 0;
}
