#include <stdio.h>

/*
   File : hw5_sophia_noriega.c
   Author: Sophia Noriega
   Assignment: Homework 5
   Date: 02/09/2025
   References: Geeks for Geeks - Return Statements
   Stack Overflow- input buffer
*/

/*XOR: inputs two integers and returns the result
of the xor operation as denoted by the "^". This 
operation returns a 1 if there is a difference between
the bits (ex. 1 and 0) 
*/
int xorFunc(int a, int b)
{
  int result = a^b; 
  printf("Your result is: %d\n", result);
  return result;
} 
  
/*OR: inputs two integers and returns the result
of the OR operation as denoted by "|". This operation 
returns a 1 if either bit is a 1. 
*/
int orFunc(int a, int b)
{
  int result = a|b;
  printf("Your result is: %d\n", result); 
  return result; 
}

/*AND: inputs two integers and returns the result
of the AND operation as denoted by "&". This operation 
returns a 1 every time there are 2 1s.  
*/
int andFunc(int a, int b)
{
  int result = a & b; 
  printf("Your result is: %d\n", result); 
  return result; 
}


/*2's Compliment: inputs two integers and returns two 
results (one for each integer). The "~" does the bitwise
NOT operator, which switches 1 to 0 and 0 to 1. The +1 adds 
1 to the value to create a two's compliment operation. 
*/ 
int twosFunc(int a, int b)
{
  int result1 = ~a+1;
  int result2 = ~b+1;
  printf("Your results are: %d and %d\n", result1, result2);
  return result1;
  return result2;
}



int main()
{
  int num1; 
  int num2; 
  int choice;
  int selection;
  int programStatus =1;
  char junkVar; 
 
  printf("Hello, welcome to the Binary Helper Tool!\n"); 
  printf("Enter your first number: \n");
    while(scanf("%d", &num1) != 1)
    {
      printf("\ninvalid input: Enter your first number: ");
      while(getchar()!='\n');
      {
        continue;
      }
 
    } 
  getchar();
 
  printf("Your inputs: \n"); 
  printf("Number 1: %d", num1);

  
  printf("\nEnter your second number: \n"); 
    while(scanf("%d", &num2) != 1)
    {
      printf("\ninvalid input: Enter your second number: ");
      while(getchar()!='\n');
      {
        continue;
      }
    }
    
  getchar(); 
 
  printf("Your inputs: \n"); 
  printf("Number 2: %d", num2);
  
  printf("\n\nMenu:\n"); 
  printf("1. XOR\n2. OR\n3. AND\n4. 2's Compliment\n");
  printf("Enter your selection: ");  
  scanf("%d", &choice); 
    while(choice > 4 || choice < 1)
    {
      printf("Please try again: ");
      scanf("%d", &choice);
    }
  
    switch(choice)
    { 
      case 1:
        xorFunc(num1, num2); 
        break; 
      case 2: 
        orFunc(num1, num2); 
        break; 
      case 3: 
        andFunc(num1, num2); 
        break; 
      case 4: 
        twosFunc(num1, num2); 
        break;        
    }
  
    while (programStatus == 1) 
    {
      printf("\n\n1. Choose new numbers and perform a new operation");
      printf("\n2. Do another operation with the same numbers");
      printf("\n3. Quit the program");
      printf("\nEnter your selection: "); 
      scanf("%d", &selection); 
        while(selection > 3 || selection < 1)
        {
          printf("Please try again: ");
          scanf("%d", &selection);
        }
                    
        switch(selection)
        {
          case 1: 
            printf("Enter your first number: ");
              while(scanf("%d", &num1) != 1)
              {
                while(getchar() != '\n')
                {
                  continue; 
                }
                printf("\ninvalid input: Enter your first number: "); 
              } 
              getchar(); 
            
            printf("\nEnter your second number: "); 
              while(scanf("%d", &num2) != 1)
              {
                while(getchar()!= '\n')
                { 
                  continue; 
                }
                printf("\ninvalid input: Enter your second number: "); 
              } 
              getchar();
              
          case 2:  
            printf("\n\nMenu:\n"); 
            printf("1. XOR\n2. OR\n3. AND\n4. 2's Compliment\n");
            printf("Enter your selection: ");  
            scanf("%d", &choice); 
              switch(choice)
              { 
                case 1:
                  xorFunc(num1, num2);
                  break; 
                case 2: 
                  orFunc(num1, num2); 
                  break; 
                case 3: 
                  andFunc(num1, num2); 
                  break; 
                case 4: 
                  twosFunc(num1, num2);
                  break;  
              }
              
              break;
                    
          case 3: 
            programStatus = 0; 
            break;

          }
          
    }
  
  return 0;   
}






  