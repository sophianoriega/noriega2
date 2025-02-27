#include <stdio.h>

/*
   File : hw3_sophia_noriega.c
   Author: Sophia Noriega
   Assignment: Homework 3
   Date: 01/26/2025
   References: 
*/

int main()
{ 
  float hoursWorked; 
  int employeeID;
  float hourlyRate;
  int employeeType;
  
  printf("Enter your employee ID: ");
  scanf("%d", &employeeID);
    while(employeeID < 1000 || employeeID > 1000000)
    {
      printf("Error. Re-enter Employee ID\n");
      scanf("%d", &employeeID);
    }
  
  printf("Enter your employee type. Enter 1 for Hourly or 2 for Salary: ");
  scanf("%d", &employeeType);
    while(employeeType < 1 || employeeType > 2)
    {
      printf("Error. Enter 1 for Hourly or 2 for Salary: ");
      scanf("%d", &employeeType);
    }
 
  printf("Enter your hourly rate: ");
  scanf("%f", &hourlyRate);
    while(hourlyRate > 100)
    {
      printf("Error. Re-enter an hourly rate < $100: "); 
      scanf("%f", &hourlyRate);
    }
  
  printf("Enter your hours worked: ");
  scanf("%f", &hoursWorked); 
  
 
  // summary 
  printf("\nInformation Summary:\n");
  printf("\nHello Employee %d!\n", employeeID);
  
  (employeeType == 1)? printf("Employee type: Hourly\n") 
                     : printf("Employee Type: Salary\n");
  
  printf("Hourly Rate: %.2f dollars/hour\n", hourlyRate);
  
  printf("Hours Worked: %.2f hours ", hoursWorked); 
  
  int talkToManager = 0; 
  
    if (hoursWorked > 60 && employeeType == 1)
    {
      talkToManager = 1; 
      hoursWorked = 60;
      printf("- Hours worked exceeds 60. Talk to Manager.\n");
    }
 
  
  int menuStatus;
  int choice;
  int payType;
  float currentPay;
  int currentPayInteger;
 
  printf("\nFor additional information, select 1. To exit select 2: ");
  scanf("%d", &menuStatus);
    while (menuStatus ==1)
    {
      printf("\nMain Menu\n");
      printf("1. Edit Employee Type\n2. Edit Rate\n3. Edit Hours Worked\n");
      printf("4. View Manager Status\n5. View Current Pay\n6. View Summary\n");
      printf("7. Exit Menu\n");
      printf("Enter your selection: ");
      scanf("%d", &choice);
        switch(choice)
        {
          case 1: 
            printf("Edit your employee type. Enter 1 for Hourly or 2 for Salary: ");
            scanf("%d", &employeeType);
              while(employeeType < 1 || employeeType > 2)
              {
                printf("Error. Enter 1 for Hourly or 2 for Salary: ");
                scanf("%d", &employeeType);
              }
            break;
          case 2:
            printf("Edit your hourly rate: ");
            scanf("%f", &hourlyRate);
              while(hourlyRate > 100)
              {
              printf("Error. Re-enter an hourly rate < $100");
              scanf("%f", &hourlyRate); 
              }
            break;
          case 3: 
            printf("Edit your hours worked: ");
            scanf("%f", &hoursWorked); 
              if (hoursWorked > 60 && employeeType == 1)
              {
                talkToManager = 1; 
                hoursWorked = 60;
                printf("- Hours worked exceeds 60. Talk to Manager.\n");
              }
            break;
          case 4: 
            (talkToManager == 1)? printf("Talk to manager: required")
                                : printf("Talk to manager: not required"); 
            break; 
          case 5: 
            printf("Type 1 for exact current pay, 2 for whole dollars: "); 
            scanf("%d", &payType); 
              if(payType == 1)
              {
                if (employeeType == 2 && hoursWorked > 40)
                {
                currentPay = 40 * hourlyRate;
                }
                else
                {
                currentPay = hoursWorked * hourlyRate;
                }
              
                printf("Current Pay: $%.2f", currentPay); 
              }
              else
              {
                if (employeeType == 2 && hoursWorked > 40)
                {
                  currentPayInteger = 40 * hourlyRate;
                }
                else
                {
                  currentPayInteger = (int)(hoursWorked * hourlyRate);
                }
                printf("Current Pay: $%d", currentPayInteger);
               } 
              break;
            case 6: 
              if (hoursWorked > 60 && employeeType == 1)
              {
                talkToManager = 1; 
              }
            
              printf("\nInformation Summary:\n");
              printf("\nHello Employee %d!\n", employeeID);
              (employeeType == 1)? printf("Employee type: Hourly\n") 
                                 : printf("Employee Type: Salary\n");
              printf("Hourly Rate: %0.2f dollars/hour\n", hourlyRate);
              printf("Hours Worked: %.2f hours ", hoursWorked); 
                (talkToManager == 1)? printf("\nTalk to manager: required")
                                    : printf("\nTalk to manager: not required");
              break;
            case 7:
              menuStatus = 2;
              break;
            default: 
              printf("please try again");
              break; 
          }
          
    }
 return 0; 
}

  
  
 
 
  