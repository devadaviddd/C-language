#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //Pointer: storing address of another variable in
    char ch = 83;
    char *ptr; //ptr is pointer 
    ptr = &ch; //&: address of variable
    printf("%d\n", ptr);

    #if 1
    //pointer has a address of it self but value is adrress of other variable
    int num = 21;
    int a = 20;
    int *ip;
    ip = &num;  //ip store address of num
    printf("%d\n", ip);
    ip = &a;
    printf("%d\n", ip);
    //In a 64 bit, a point has a size of 8 bytes = 32 bits because all of address is store in 32 bits

    //DEREFERECING OPERATOR
    *ip = 22; //assign value at the current address that pointing by a pointer
    printf("%d\n", ip);
    #endif

    #if 0
    int num = 21;
    int *ip;
    ip = &num;
    //Print out address and values
    printf("Address of num: %p\n", &num);
    printf("Address of ip : %p\n", &ip);
    printf("Value of ip : %p\n\n", ip);
    /* Access value of num through its pointer */
    *ip = 22; //Variable num now will get value 22
    printf("Current value of num : %d\n", num);
    printf("Current address of ip: %p\n", ip);
    

    //if we declare *ip but doesnot know which value to store declare like this:
    //int *ip = NULL;
    int a;
    int *pa = &a; // the same with int *pa; pa = &a;

    
    //POINTERS AND ARRAYS
    int arr[] = {5, 2, 7, 8, 10};
    int *p = arr; // the same with int *p = &arr[0];
    printf("%d\n", *p);

    p++; // the same with int *p = &arr[0 + 1]
    printf("%d\n", *p);

    p--;
    printf("%d\n", *p);

    //print the address of the first element
    printf("arr = %p, &arr[0] = %p\n", arr, &arr[0]);

    for(int i = 0; i < 5; i++)
    {
        printf("%p\n", (arr + i));
    }

    //Second way to print array using pointer arithmetic
    for(int *p = arr; p < arr + 5; p++) // the same with for(int *p = &arr[0]; p < &arr[0] + 5; p++)
    {
        printf("%d ", *p);
    }      

    //POINTERS AND STRINGS 
    char s1[] = "Hello, World!";
    //Declate a pointer pointed to a constant string --> address first element is the constant address of this pointer
    char *s2 = "Good morning!";

    char c = 'A';
    // s2 = &c;
    // s1 = &c; --> cannot assing address to string without pointer

    printf("\n%s \n", s1);
    printf("%s \n", s2);

    //ARRAY OF STRINGS
    char *sports[5] = {
        "goft",
        "hockey",
        "football",
        "cricket",
        "shooting",
    }; // constant string because store in the fix location

    printf("%10s %15s \n", "String", "Address");
    for(int i = 0; i < 5; i++)
    {
        printf("%10s %15p \n", sports[i], sports[i]);
    }

    char str[] = "ABC";
    printf("%s", &str[0]);
    #endif

    return 0;

}

