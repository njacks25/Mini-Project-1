/******************************************************************************

Nickoals Jackson
ELET 1102-001
11/16/20

Mini Project 1 (Part 3)

This code tells you your insurnce cost based on user input for age

*******************************************************************************/
#include <stdio.h>

int main()
{
    int iAge;
    
    printf("Enter Your Age");
    scanf("%d", &iAge);
    
    if (iAge < 25)
    {
        printf("your yearly insurance cost is $5000\n");
    }
    else if (iAge >= 25 && iAge < 35)
    {
        printf("your yearly insurance cost is $3500 \n");
        printf("if you haven't had any acidents your yearly insurance cost is $3430\n");
        
    }
    
    else if(iAge >= 35 && iAge < 50)
    {
        printf("Your yearly insurence cost is $2800\n");
    }
    
    else if(iAge >= 50)
    {
        printf("Your yearly insurence cost is $1500\n");
    }
    
    return 0;
}