#include <stdio.h>
#include <string.h>
#define MAXSIZE 30

struct student
{
    int id;
    char name[MAXSIZE];
    int age;
};

void print_students(struct student records[], int size)
{
    for(int i = 0;  i < size; i++)
    {
        printf("Id: %d Name: %s Age: %d\n", records[i].id, records[i].name, records[i].age);
    }
}


int main()
{
    //Declare an array of students
    struct student records[2];
    int size = sizeof(records)/sizeof(records[0]);

    records[0].id = 1;
    //Paste string to object use strcpy
    strcpy(records[0].name, "Nam Nguyen");
    records[0].age = 20; 

    records[1].id = 2;
    strcpy(records[1].name, "Alice James");
    records[1].age = 19;

    print_students(records, size);
}