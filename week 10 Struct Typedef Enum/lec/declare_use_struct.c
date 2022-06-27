#include <stdio.h>
#define MAXSIZE 30

struct student
{
    int id;
    char name[MAXSIZE];
    int age;
};

//Pass Harry to function print_student (pass by value)
void print_student(struct student Harry)
{
    printf("id = %d, name = %s, age = %d\n", Harry.id, Harry.name, Harry.age);
}

//Pass &Harry to the function (pass by reference)
void pass_pointer(struct student *Harry)
{
    Harry->age = 20;
    printf("id = %d, name = %s, age = %d\n", Harry -> id, Harry -> name, Harry -> age);
}

int main()
{
    //Declare and intialize a variable harry of type struct student
    struct student Harry = {3943524, "Harry Potter", 22};


    //Pass Harry to function print_student (pass by value)
    print_student(Harry);

    //Pass &Harry to the function (pass by reference)
    pass_pointer(&Harry);

    print_student(Harry);

}