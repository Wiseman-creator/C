/*  We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.
Hint: Use loop & use a random number generator. */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int user_choice, computer_choice, guesses = 0;
    computer_choice = rand() % (100) + 1;
    printf("Enter a number between 1 - 100:\n");

    do
    {
        scanf("%d", &user_choice);
        guesses++;
        if (user_choice == computer_choice)
        {
            printf("You guessed the right number!\n");
            printf("Number of guesses: %d\n", guesses);
            return 0;
        }
        else
        {
            if (user_choice > computer_choice)
            {
                printf("Too high!\nTry again:");
            }
            else
            {
                printf("Too low!\nTry again:");
            }
        }
    } while (user_choice != computer_choice);

    return 0;
}