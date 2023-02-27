#include <stdio.h>

/**
* swap_int - Entry point
* @a: the a
* @b: the b
* Return: 0
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
