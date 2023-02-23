#include "main.h"

/**
* print_square - f
* @size: t
* Return: 0
*/

void print_square(int size)
{
	int i;
	int r;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
	for (r = 0; r < size; r++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
}
