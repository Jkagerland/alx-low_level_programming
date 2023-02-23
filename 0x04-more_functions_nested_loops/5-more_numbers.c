#include "main.h"

/**
* more_numbers - Entry
* Return: 0 success
*/

void more_numbers(void)
{
	int i;
	int r;

	for (i = 0; i < 10; i++)
	{
	for (r = 0; r <= 14; r++)
	{
	if (r > 9)
	{
	_putchar((r / 10) + '0');
	}
	_putchar((r % 10) + '0');
	}
	_putchar('\n');
	}
}
