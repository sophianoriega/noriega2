#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

/*
   File : hw4_sophia_noriega.c
   Author: Sophia Noriega
   Assignment: Homework 4
   Date: 02/02/2025
   References: Google - srand
*/

int main()
{
  srand(time(NULL));
  int elevation = 38000;    
  int secToDestination = 10; 
  int distFromPath;
  int gameStatus = 1; 
  int correctionStatus; // 1 to stay, 2 to correct 
  int randomInc;
  
  while (gameStatus == 1) 
  { 
    printf("\nAutopilot Simulator Game:\n"); 
    distFromPath =rand() % (70-50+1) + 50;
    
    for (secToDestination = 10; secToDestination > 0; --secToDestination)
    { 
      randomInc = rand() % (25-1+1) + 1; 
      printf("\n\nDistance from path: %d\n", distFromPath);
      printf("Seconds to Destination: %d\n", secToDestination); 
      printf("\nenter 1 to stay. Enter 2 to correct: ");
      scanf("%d", &correctionStatus);
        while (correctionStatus != 2 && correctionStatus != 1)
        {
          printf("Invalid input: please enter 1 to stay or 2 to correct: "); 
          scanf("%d", &correctionStatus); 
        } 
       
      if (correctionStatus == 1)
      {
        distFromPath = (distFromPath < 0)? distFromPath - randomInc
                                         : distFromPath + randomInc;     
      }
      else
      {
        if (distFromPath < 0)
        {
          distFromPath = distFromPath + randomInc;
        }
        else
        { 
          distFromPath = distFromPath - randomInc;
        }
      }
      sleep(1); 
    }
    if (distFromPath >= -4 && distFromPath <= 4)
    {
      printf("Success!\n Would you like to play again?\n");  
    }
    else 
    {
      printf("You lost!\n Would you like to play again?\n"); 
    }
    printf("1. Play Again\n2. Quit\nEnter Selection: "); 
    scanf("%d", &gameStatus); 
      while (gameStatus != 2 && gameStatus != 1)
      {
        printf("Invalid input: Enter 1. to play again or 2. to quit: "); 
        scanf("%d", &gameStatus); 
      } 
       
  }
   
  return 0; 
}