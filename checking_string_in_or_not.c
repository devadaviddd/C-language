#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50

int main () {
   char str[SIZE];
   printf("Enter a string: ");
   scanf("%s", str);

   char finding[SIZE];
   printf("Enter finding: ");
   scanf("%s", finding);

   int check = 0;
   for(int i = 0; i < SIZE; i++)
   {
      int finding_index = 0;
      int str_index = i;
      while(finding[finding_index] == str[str_index])
      {
         finding_index++;
         str_index++;
         if(finding[finding_index] == '\0')
         {
            check = 1;
            break;
         }
      }
   }
   if(check == 1)
   {
      printf("In");
   }
   else
   {
      printf("Not In");
   }

   return(0);
}