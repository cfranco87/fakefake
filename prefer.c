#include <stdio.h>

int main(void)
{
    int prefer;

    printf("on a scale of 1 - 10, how sad are you?\n");
    scanf(" %d", &prefer);

    if (prefer >= 8)
    {
        printf("things are suicidal!\n");
    }
    else if (prefer > 5)
    { 
        printf("hang in there, things are looking up\n");
    }
    else
    {
        printf("you are a lonely boy\n");
    }

    return (0);
}