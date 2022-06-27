#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<time.h>


typedef enum {SPADES = 1, CLUBS, DIAMONS, HEARTS} suittype;
typedef enum {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK,
                QUEEN, KING} ranktype;

typedef struct 
{
    suittype suit; // 1 to 4
    ranktype rank; // 1 to 13
    int delivered; // delivered to players
} cardtype;

const int DECK_SIZE = 52;
const int RANK_SIZE = 13;


// Init all cards in standard order
void init(cardtype cards[])
{
    for(int i = 0; i < DECK_SIZE; i++)
    {
        cards[i].suit = i / RANK_SIZE + 1;
        cards[i].rank = i % RANK_SIZE + 1;
        cards[i].delivered = 0;
    }
}

// Convert rank number to string
char *ranktostr(ranktype rank, char *rankstr)
{
    const char *all_rank[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", 
                           "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    strcpy(rankstr, all_rank[rank - 1]);
    return rankstr;
}

//Convert suit type to string
char *suittostr(ranktype suit, char *suitstr)
{
    const char *all_suit[] = {"SPADES", "CLUBS", "DIAMONS", "HEARTS"};
    strcpy(suitstr, all_suit[suit - 1]);
    return suitstr;
}

//Function to deliver a card to player
cardtype *getacard(cardtype cards[])
{
    //Randomly pick up a card
    srand(time(NULL));
    int i;
    do
    {
        i = rand() % 52; // 0 --> 51
    } while(cards[i].delivered == 1); //mark it is already delivered
    cards[i].delivered == 1;
    return &cards[i]; //return address
}

//showcard
void showcard(cardtype card)
{
    char rank_to_str[6], suit_to_str[9];
    printf("%s of %s\n", ranktostr(card.rank, rank_to_str), suittostr(card.suit, suit_to_str));

}

//caluclate points
int calpoint(cardtype *playercd[])
{
    //three cards are jack/queen/king, it is highest point
    if(playercd[0] -> rank > 10 && playercd[1] -> rank > 10 && playercd[2] -> rank > 10)
        return 10;
        
    //otherwise, sum all points and modulus by 10(point is 0 --> 9)
    int point = 0;
    for(int i = 0; i < 3; i++)
    {
        if(playercd[i] -> rank < 10)
            point += (playercd[i] -> rank);
    }
    point %= 10;
    return point;

}

int main()
{
    //Array of 52 cards(deck)
    cardtype cards[52];
    cardtype *player1[3], *player2[3];

    //init the random generator
    srand(time(NULL));

    //init cards i standard generator
    init(cards);

    //Deliver cards for two players
    for(int i = 0; i < 3; i++)
    {
        printf("Player 1 hit enter to get a card: "); getchar();
        player1[i] = getacard(cards);
        showcard(*player1[i]);

        printf("Player 2 hit enter to get a card: "); getchar();
        player2[i] = getacard(cards);
        printf("\t"); showcard(*player2[i]);
    }

    //Calculate points and print out result
    int player1_pt = calpoint(player1);
    printf("\nPlayer 1's point: %d\n", player1_pt);
    int player2_pt = calpoint(player2);
    printf("Player 2's point: %d\n", player2_pt);

    if(player1_pt > player2_pt)
        printf("Player 1 win");
    else if(player1_pt < player2_pt)
        printf("Player 2 win");
    else
        printf("It is a draw");

    return 0;
}

