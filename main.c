#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int Guessed_Number;
    int No_of_Guesses = 0;
    srand(time(0));
    int RandomNumber = (rand() % 100) + 1;
    do
    {
        printf("Enter a number:");
        scanf("%d", &Guessed_Number);
        if (Guessed_Number > RandomNumber)
        {
            printf("The Number is lower than that number\n");
        }
        else if (Guessed_Number < RandomNumber)
        {
            printf("The Number is higher than that number\n");
        }
        else
        {
            printf("Congratulations! You won the game\n");
        }
        No_of_Guesses++;

    } while (Guessed_Number != RandomNumber);
    printf("The total no of guesses is %d", No_of_Guesses);


    return 0;
}