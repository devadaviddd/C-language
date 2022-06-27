#include <stdio.h>

//Create a new data type name byte
typedef unsigned char byte;

//Use typedef and struct together to create a new data type name student
typedef struct
{
    int id;
    char name[30];
    byte age;
}student;

void print_student(student harry)
{
    printf("%d %s %d", harry.id, harry.name, harry.age);
}

int main()
{
    student harry = {12345, "Harry Potter", 22};
    print_student(harry);
    return 0;
}