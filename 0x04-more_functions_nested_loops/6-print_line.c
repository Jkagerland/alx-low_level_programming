#include "main.h"

/**
* print_line - check
* @n: the num
* Return: 0
*/

void print_line(int n)
{
	if (n > 0)
	{
	int i = 0;

	for (; i <= n; i++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
}

