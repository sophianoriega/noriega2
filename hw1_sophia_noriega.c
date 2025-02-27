#include <stdio.h>

/*
* File : hw1_sophia_noriega.c
* Author: Sophia Noriega
* Assignment: Homework 1
* Date: 01/09/2025
* References: checked work with Ben Kovach
*/

int main()
{
  float num1 = 0 ; 
  float num2 = 0 ; 
  
  printf("type the first number for the numerator: ") ;
  scanf("%f", &num1) ; 
  
  printf("type a second number for the denominator: ") ; 
  scanf("%f", &num2) ; 
   
    if (num2 == 0)
    {
      printf("error, can't divide by zero") ; 
    }
   
    else 
    {
    float ans = num1 / num2 ; 
    printf("numerator: %.2f denominator: %.2f answer: %.2f\n", num1, num2, ans) ; 
    } 
}
