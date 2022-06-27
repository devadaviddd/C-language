#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*a. This program simply illustrates the usage of a pointer, but has a bug inside. Check 
where is the bug, and why, then fix it (print out letter ‘B’).*/
    char ch = 'A';
    char *ptr = &ch; //pointer ptr points to ch

    //Acess value of ch through its pointer
    *ptr = 'B';
    printf("%c\n", ch);

    /*b. After the above statements, which of the following statements will change the 
value of a to 75?*/
    int *p, a, b;
    a = 42;
    b = a;
    p = &a;

    //a) b = 75;
    b = 75;
    printf("%d\n", a); // a = 42 --> Wrong

    //b) *b = 75; --> syntax error

    //p = 75;
    #if 0
    p = 75;
    printf("%d\n", a); // a = 42 --> Wrong
    #endif

    //*p = 75;
    *p = 75;
    printf("%d\n", a); // a = 75 --> Right

    //*(&a) = 75;
    printf("%d\n", *(&a) = 75); // a = 75 --> Right

    /*c. Using only one instruction, replace the number 30 in the array by 100. How many 
ways you have?*/
    char arr[] = {1, 2, 3, 4, 5, 6};
    char *p_arr = arr;

    #if 0
    // p_arr+= 2;

    printf("%d\n", *(p_arr += 2) = 100); // one way
    printf("%d\n", arr[2]); // second way
    printf("%d\n", *(&arr[2]) = 100); //third way
    printf("%d\n", arr[2] = 100); //fourth way
    printf("%d\n", *(p + 2) = 100);
    printf("%d\n", p[2] = 100);
    #endif

    /*d. Print out all address of all elements in the array above (Hint: use & operator to get 
address, and %d, %x or %p for format specifier).*/
    for(; p_arr < arr + 6; p_arr++)
    {
        printf("Address of %c: %p %x\n", *p_arr, p_arr, p_arr);
    }


    return 0;
}