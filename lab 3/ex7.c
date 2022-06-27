#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Develop a Rock-Paper-Scissors game to play against the computer. Assume that 0 is used to represent Rock, 1 to represent Paper, and 2 to represent Scissors.
First, the computer selects a random integer among 0, 1, and 2. This value is not known by the user. The user then enters a choice as an integer. 
The program then determines if the user wins, loses, or draws against the computer. Whenthe user enters -1, the program exits. 
But ifthe user enters any value other than 0, 1, 2,and -1 the program prints an error messages then continues to play another round.
Note that the rule is Rock wins Scissors, Scissors wins Paper, and Paper wins Rock.Here is a sample run of the game.*/

int main()
{
    //create seed
    srand(time(NULL));

    int computer;
    int user;
    int running = 1; 

    //if the program not equal running(1) then program exit
    while(running)
    {
        printf("Welcome to ROCK-PAPER-SCISSORS game\n");
        printf("ROCK: 0, PAPER: 1, SCISSORS: 2, EXIT: -1\n");
        printf("Enter an integer for your choice: ");
        scanf("%d", &user);

        computer = rand() % 3; //create a random number that is modulus of 3 --> rand in the range of (0, 1, 2)

        //set a condition if user enter -1 then running equal -1 then exit a while loop.
        if(user == -1)
        {
            running = -1;
            printf("Program exits. Goobye!!");
            break;
        }
        else 
        { 
            //printing the first line of user picked making 3 case with if user = 0, 1, 2
            switch(user)
            {
                case 0:
                    printf("You picked ROCK\n");
                    break;
                case 1:
                    printf("You picked PAPER\n");
                    break;
                case 2:
                    printf("You picked SCISSORS\n");
                    break;
                default:
                    goto A; //not printing second line of computer picked

            }  

            //printing the second line of computer picked making 3 case with if user = 0, 1, 2
            switch(computer)
            {
                case 0:
                    printf("Computer picked ROCK\n");
                    break;
                case 1:
                    printf("Computer picked PAPER\n");
                    break;
                case 2:
                    printf("Computer picked SCISSORS\n");
                    break;
            }
            
            A:
            if(user == 0 && computer == 1 || user == 1 && computer == 2 || user == 2 && computer == 0) //condition for user to lost
                printf("You LOST\n");
            else if(user == 0 && computer == 2 || user == 1 && computer == 0 || user == 2 && computer == 1) //condition for user to win
                printf("You WIN\n");
            else if(user == computer)
                printf("It is a DRAW\n"); //condition for user to draw
            else  // if all of the user input not equal 0, 1, 2 then printing invalid choice
                printf("Invalid choice. You must enter one of the above integers.\n");
               
            printf("\n");
        }
    }
    return 0;
}