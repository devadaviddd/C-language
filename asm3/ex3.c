/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2021C
  Lab Assessment: 3
  Author: Nguyen Tuong Khang
  ID: s3927112
  Compiler used: Compiler version gcc 8.1.0
  Created  date: 14/1/2021
  Acknowledgement: Lecture slides and tutorial classes of Linh Tran.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 255

typedef struct 
{
    int id[50];
    char name[255];
    int score;
}student;

int main()
{
    //a
    student records[3];
    for(int i = 0; i < 3; i++)
    {
        printf("Enter student info: ");
        scanf("%d %s %d", &records[i].id, records[i].name, &records[i].score);
    }
    printf("All information in new order:\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d %s %d\n", records[i].score, records[i].name, records[i].id);
    }

}


