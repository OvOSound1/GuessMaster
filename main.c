#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

  int max_in_range, the_number, current_guess, num_of_guesses=0;
  printf("Welcome to the number guessing game!\n");
  printf("Enter a number that is 100 or bigger:  ");
  scanf("%d", &max_in_range);
  //Generate a random number
  srand(time(0));
  the_number = (rand() % max_in_range) + 1;
  printf("A random number between 1 and %d has been generated.\n",max_in_range); 
  printf("Enter a guess: ");
  scanf("%d", &current_guess);
  num_of_guesses++;
  while (current_guess != the_number)  {
    if (current_guess < the_number)  {
      printf("Too low. Try again.\n");
    }else if (current_guess > the_number)  {
      printf("Too high. Try again.\n");
    }
    printf("Enter a guess: ");
  scanf("%d", &current_guess);
  num_of_guesses++;
}  // end while loop
  printf("Congratulations! You got the number in %d guesses!\n",num_of_guesses);
  printf("Thank you for playing!\n");
  
  return 0;
}