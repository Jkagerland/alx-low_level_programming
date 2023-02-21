#include "main.h"
/**
* print_to_98 - entry point
* @n: the num
* Return: 0 success
*/

void print_to_98(int n)
{

	for (; n < 98; n++)
	{
	_putchar(n);
	_putchar(',');
	_putchar(' ');
	}
}
