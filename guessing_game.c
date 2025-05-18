/*We will write a program that generates a random number and asks the player to guess 
it. If the player’s guess is higher than the actual number, the program displays “Lower 
number please”. Similarly, if the user’s guess is too low, the program prints “Higher 
number please”. 
When the user guesses the correct number, the program displays the number of 
guesses the player used to arrive at the number. 
Hint: Use loop & use a random number generator. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ate=1;
   int max_num=10;
   int guess;
    srand(time(NULL));  // Seed the random number generator with current time

    int random_num = (rand() % 100) + 1;  
    
    // rand() % 100 gives 0-99, +1 shifts to 1-100
    // printf("Random number between 1 and 100: %d\n", random_num);
    printf("/n----welcome to guessing game----\n");
    printf("I've picked a secret number between 1 and 100. Can you guess it?\n");
     do
     {

        printf("ENTER YOUR %d GUESS: ",ate);
        scanf("%d",&guess);
       
        if (guess>random_num )
        {
            printf("TOO HIGH guess lower 🔻(try harder) bruh\n");
        }
        else if (guess<random_num)
        {
            printf("TOO low!!! guess higher 🔺(ugh lower number try higher) bruh\n");
        }
        else if (guess==random_num)
        {
            printf("OMG!!!!🎉 YOU GOT IT RIGHT IN YOUR %d ATTEMPT\n",guess); 
        }  ate++;
        if (ate==max_num)
        {
           printf("Out of tries! The correct number was %d\n", random_num);
        }
    }while ( ate!=max_num);
   
    
     
     
        
    return 0;
}
