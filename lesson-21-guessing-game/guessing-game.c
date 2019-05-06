#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Prototypes:
void runGuessingGame();

int main()
{
    runGuessingGame();
    return 0;
}

void runGuessingGame()
{
    int secretNum = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;


    while(guess != secretNum && outOfGuesses == 0)
    {
        if(guessCount < guessLimit)
        {
            printf("Enter a Number: ");
            scanf("%d", &guess);
            guessCount++;

            if(guess != secretNum)
            {
                printf("WRONG!\n");
            }
        }
        else
        {
            outOfGuesses = 1;
        }
    }

    if(outOfGuesses == 1)
    {
        printf("Out of guesses");
    }
    else
    {
        printf("You WIN!!!");
    }
}