/******************************************************************************

Matthew Divittorio, Nickolas Jackson
11/23/20
ELET 1102-001


The following program will be used to calculate insurance cost based on wadge.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int userAge;       //Age of user//
  float userCost;      //Users cost of insurance//
  char userFault;

   printf("Welcome to our insurance calculator.\n\n"); 
   printf("This calculator will provide a cost of insurance relative to you age.\n\n");
   printf("When you are ready please follow the instruction prompted below.\n\n");
   printf("Have you been in any accidnets: Enter Y or N\n");
   scanf("%c", &userFault);
   
   // Fail safe for improper inputs //
   while( userFault  != 'Y' && userFault != 'N')
   {
       
       
       
       printf("Now lets try again dumby.\n Have you been in any accidnets: Enter Y or N\n");
       scanf("%c", &userFault);
       
       
   }
 
   
  
   
   printf("Please enter your age:\n ");
   scanf ("%d", &userAge);
  
   
    // Less the 25 //
    
    if( userAge < 25)
    {
       userCost = 5000;
       
      printf("The Cost of you insurace is $%.2f per year", userCost);   
    }
    
    // 25 to 35 //

    else if( userAge >= 25 && userAge < 35 && userFault == 'Y' )
    {
        
        userCost = 3500;
        printf("The Cost of you insurace is $%.2f per year", userCost);
        
    }
    
    else if( userAge >= 25 && userAge < 35 && userFault == 'N' )
    {
        
        userCost = 3500 * .98;
        printf("The Cost of you insurace is $%.2f per year", userCost);
        
    }    
    
    // 35 to 50 //
    
    
    else if( userAge >= 35 && userAge < 50 && userFault == 'Y' )
    {
        
        userCost = 2800;
        printf("The Cost of you insurace is $%.2f per year", userCost);
        
    }
    
    else if( userAge >= 25 && userAge < 35 && userFault == 'N' )
    {
        
        userCost = 2800 * .98;
        printf("The Cost of you insurace is $%.2f per year", userCost);
        
    }    
    
    
    // 50 or higher //
    
    else if( userAge > 50 && userFault == 'Y' )
    {
        
        userCost = 1500;
        printf("The Cost of you insurace is $%.2f per year", userCost);
        
    }
 
    else
    {
    
        userCost = 1500 * .98;
        printf("The Cost of you insurace is $%.2f per year", userCost);  
       
    }

    return 0;
}
