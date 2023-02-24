#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more header goes there */

/**
* positive_or_negative - Entry to the program
* @i: t
* Return: 0 (success)
*/

int positive_or_negative(int i)
{

        if (i > 0)
                printf("%d is positive\n", i);
        else if (i == 0)
                printf("%d is zero\n", i);
        else
                printf("%d is negative\n", i);
        return (0);
}
