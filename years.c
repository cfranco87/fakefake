#include <stdio.h>
#define CURRENTYEAR 2001

int birthday(void) 
{
    int yearborn;
    int edad;    
     
    printf("Enter the Bush years!, the new millenium, this is %d\n", CURRENTYEAR);
  
    edad = CURRENTYEAR - yearborn;

    if (yearborn > CURRENTYEAR)
        printf("you old as fuck!\n");
    else if (yearborn < 2000)
        printf("you young as fuck!\n");
    else  
        printf("what year were you born?\n");

    

    printf("\nSo this year you will turn %d on your birthday!\n", edad);
    scanf(" %d", &yearborn);
    
    if ((yearborn % 4) == 0)
        printf("\nYou were born on a leap year.\n");
    else
        printf("maybe, next time\n"); 

    return (0);
}

