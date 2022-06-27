/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2021C
  Lab Assessment: 1
  Author: Nguyen Tuong Khang
  ID: s3927112
  Compiler used: Compiler version gcc 8.1.0
  Created  date: 13/11/2021
  Acknowledgement: List the resources that you use to complete this assessment (e.g. your lecture sidles).
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Prompt the user to enter an integer of total hours, convert it to days and hours in the following way:
    int hours;
    int remain_hours;
    float days;

    printf("Enter total hours: ");
    scanf("%d", &hours);

    days = (float)hours/24; //change hours int to float and do the divide.
    remain_hours = hours % 24; //remain hours will store in remain_hours

    printf("It is %.2f days\n", days);
    printf("which is %d days and %d hours", hours/24, remain_hours); 
    

    return 0;
}