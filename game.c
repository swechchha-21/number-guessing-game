// Guess The Number Game ( Project )
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand() % 50 + 1; // Generates a random number between 1 to 50

    // printf("The Number is: %d", number);

    //  keep running the loop until the number is gussed

    do
    {
        printf("Guess the number between 1 to 50:\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);

    return 0;
}