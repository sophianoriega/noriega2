#include <stdio.h>
#include <unistd.h>

/*
* File : hw2_sophia_noriega.c
* Author: Sophia Noriega
* Assignment: Homework 2
* Date: 01/19/2025
* References: 
*/

int main()
{
  float ambientTemperature;
  int gallonsFuelBefore;
  float requiredEngineTemp;
  
  printf("enter the ambient temperature:");
  scanf("%f", &ambientTemperature);
  

  printf("enter the gallons of fuel present (whole number):");
  scanf("%d", &gallonsFuelBefore);
    while (gallonsFuelBefore < 0)
    {
    printf("Invalid input, type a positive value\n");
    scanf("%d", &gallonsFuelBefore);
    }
    
  printf("enter the required engine temperature:");
  scanf("%f", &requiredEngineTemp);
   while (requiredEngineTemp < 0)
    {
    printf("Invalid input, type a positive value\n");
    scanf("%f", &requiredEngineTemp);
    }
  
  float engineTemperature = ambientTemperature + 3;
  int seconds;
  int gallonsFuel = gallonsFuelBefore; 
  
    while (engineTemperature < requiredEngineTemp) {
    seconds ++ ;
    engineTemperature += 1.25 ;
    gallonsFuelBefore -=2;
    sleep(1);
    printf("Engine Temperature: %f\n", engineTemperature);
    }
    
    int gallonsFuelUsed = gallonsFuel - gallonsFuelBefore; 
    printf("Warmup completed after %d seconds. Warmup used %d gallons of fuel. Remaining fuel left onboard is %d gallons", seconds, gallonsFuelUsed, gallonsFuelBefore); 
    
    return 0;
}
