/*
Project concept from GeekForGeeks
Website Link: https://www.geeksforgeeks.org/rock-paper-scissor-in-c/
*/


#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// bounds to keep random num generation between 1-3
#define UPPER_BOUND 3
#define LOWER_BOUND 1

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
    char plChoice, cmpChoice, correctInput = 0;

    printf("Select r for Rock, p for Paper or s for Scissor: ");

    // Keeps looping until r/p/s is given (capitals are corrected to lowercase)
    while (!correctInput) {
        scanf_s("%c", &plChoice);
        plChoice = tolower(plChoice);
        if (plChoice == 's' || plChoice == 'p' || plChoice == 'r') {
            correctInput = 1;
        }
        else {
            printf("Invalid argument, please enter a valid input: ");
        }
    }

    srand(time(NULL));

    // random number between 1-3
    randVal = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;
    
    // 1 = rock, 2 = paper, 3 = scissor
    switch (randVal) {
    case 1:
        cmpChoice = 'r';
        break;
    case 2:
        cmpChoice = 'p';
        break;
    case 3:
        cmpChoice = 's';
        break;
    default:
        printf("randVal doesn't have correct value\n");
        printf("randVal: %c", randVal);
        return -1;
        break;
    }

    result = game(plChoice, cmpChoice);

    if (result == 1) {
        printf("You have won the game!\n");
    }
    else if (result == 0) {
        printf("The game was a tie!\n");
    }
    else {
        printf("You have lost the game!\n");
    }

    printf("Player Choice: %c | Computer Choice: %c", plChoice, cmpChoice);
}

// decides who wins between player and computer
// returns 1 if player wins, 0 if tie or -1 if player loses
int game(char plChoice, char cmpChoice) {
    if (plChoice == cmpChoice) {
        return 0;
    }

    if (plChoice == 'r' && cmpChoice == 's') {
        return 1;
    }
    else if (plChoice == 's' && cmpChoice == 'r') {
        return -1;
    }

    if (plChoice == 'p' && cmpChoice == 'r') {
        return 1;
    }
    else if (plChoice == 'r' && cmpChoice == 'p') {
        return -1;
    }

    if (plChoice == 's' && cmpChoice == 'p') {
        return 1;
    }
    else if (plChoice == 'p' && cmpChoice == 's') {
        return -1;
    }
}
