/******************************************************************************

Nickoals Jackson, Matthew Divittorio
ELET 1102-001
11/16/20

Mini Project 1 (Part 2)

This code tells you what the largest number is of three numbers entered by the user

*******************************************************************************/
#include <stdio.h> 
int main() 
{ 
    int firstNumber;
    int secondNumber;
    int thirdNumber; 
  
    printf("Enter three numbers seperated by a space: "); 
    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber); 
  
    if (firstNumber >= secondNumber && firstNumber >= thirdNumber)
    {
        printf("%d is the largest number.", firstNumber);  
    }
    
    else if (secondNumber >= firstNumber && secondNumber >= thirdNumber)
    {
        printf("%d is the largest number.", secondNumber); 
    }
    
    else
    {
        printf("%d is the largest number.", thirdNumber); 
    }
    
    return 0; 
}
