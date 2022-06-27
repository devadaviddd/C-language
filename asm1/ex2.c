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
    int line;
    int running = 1;
    int count = 0;
    int space = 8;
    int temp = 5;
    do
    {
        printf("Enter a number(1 - 10): ");
        scanf("%d", &line);

        if(line < 1 || line > 10)
        {
            printf("Invalid Number\n"); // breaking the while loop when the condition is true
            break;
        }
        else if(line % 2 == 0) //question a) set condition to even to run
        {
            for(int i = 0; i < line; i++)
            {
                printf("1 ");

                for(int j = 2; j <= line - i; j++)
                {
                    printf("%2d ", j);
                }
                printf("\n");
            }
        }
        else //question b) set condition to odd to run
        {
            for(int i = line; i >= 1; i--)
            {
                for(int space = 0; space < count; space++) //scan space with this pattern and < count and set count initial equal 0 then next loop will plus 1
                {
                    printf("   ");
                }
                for(int j = i; j >= 1; j--) //looping the second pattern
                {
                    if(i <= line - 1 && i >= 1) //set condition to print space
                    {
                        if(j == i || j == 1) //if condition is j == i and j == 1 print j instead of space
                        {
                            printf("%2d ", j);                            
                        }
                        else //else print space
                        {   
                            printf("   ");
                        }
                    }
                    else //else print j 
                        printf("%2d ", j);
                }
                for(int z = 2; z <= i; z++) //looping third pattern
                {
                    printf("%2d ", z);
                }
                count++;
                printf("\n");
            }
        }
        count = 0; //reset count for next iteration of while
    } while (line < 1 || line > 10 || running == 1); //running == 1 so that the program will run continuosly until it is invalid input from user
    
    return 0;
}