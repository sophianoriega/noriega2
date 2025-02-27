#include <stdio.h>

/*
   File : hw6_sophia_noriega.c
   Author: Sophia Noriega
   Assignment: Homework 6
   Date: 02/16/2025
   References: Stack Exchange - checked with Ben Kovach
*/

// base case
int nMatrix(int n, int sVal, int matrix[n][n])
{
  
  int j; 
  int i;  
   
  if (n <= sVal)
  {
    return;
  }
  
    for (j=0; j<=sVal; j++)
    {
      matrix[sVal][j] = j+1; 
    } 
    for (i = sVal + 1; i < n; i++)
    {
      matrix[sVal][i] = 0; 
    } 
  nMatrix(n, sVal+1, matrix) ;
}

int main()
{
  int i; 
  int j;
  int dimension; 
  int result; 
  
  printf("input a number between 0 and 100: ");
  scanf("%d", &dimension); 
   
    while(dimension <= 0 || dimension >= 100) 
    {
       printf("Please enter a number between 0 and 100:\n");
       scanf("%d", &dimension); 
    }
     
  int matrix[dimension][dimension];
    
  nMatrix(dimension, 0, matrix);
    for (i=0; i<dimension; i++ )
    {
      for (j=0; j<dimension; j++)
      { 
        if(matrix[i][j] != 0)
        {
          printf(" %d", matrix[i][j] );
        }
      } 
        printf("\n"); 
    }  
 
  
  return 0; 
}