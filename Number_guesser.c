#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int guessed_number;
    int number_of_guesses = 0;

    // printf("the random number is = %d", randomNumber);

    do
    {
        printf("Guess the number please! \n");
        scanf("%d", &guessed_number);
        if (guessed_number < randomNumber)

            printf("Higher number please!!\n");

        else if (guessed_number > randomNumber)

            printf("Lower number please!!\n");

        number_of_guesses++;

    } while (guessed_number != randomNumber);
    printf("Yes! The correct number is %d \n", randomNumber);
    printf("Congratulations on guessing the right number!\nYou took %d attempts\n", number_of_guesses);
}