/*
Project concept from GeekForGeeks
Website Link: https://www.geeksforgeeks.org/rock-paper-scissor-in-c/
*/


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// bounds to keep random num generation between 1-3
#define UPPER_BOUND = 3
#define LOWER_BOUND = 1

/*
Win Conditions:
Rock > Scissors
Scissors > Paper
Paper > Rock
*/

int game(char plChoice, char cmpChoice);

//plays the game of rock paper scissors and outputs the winner of the game
int main()
{
    int randVal, result;
    char plChoice, cmpChoice;

    /*

    for (int i = 0; i < 50; i++) {
        int value = rand() % (upper_bound - lower_bound + 1)
            + lower_bound;
        printf("rand: %d | i: %d\n", value, i);
    }*/

}

// decides who wins between player and computer
int game(char plChoice, char cmpChoice) {
    return 0;
}
