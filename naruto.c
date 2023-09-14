#include <stdio.h>

char feeling_sad(int ninja)
{
    char character = 0;

    printf("On a scale of 1 - 10, how sad are you?\n");

    if (character >= 8)
    {
        printf("Things are suicidal!\n");
    }
    else if (character >= 5)
    { 
        printf("Hang in there, things are looking up\n");
    }
    else
    {
        printf("You are a lonely boy\n");
    }

    return (ninja);
}

int main(void)
{
    int sasuke = 9;
    int naruto = 6;
    int sakura = 4;

    feeling_sad(sasuke);
    feeling_sad(naruto);
    feeling_sad(sakura);
    
}