#include "main.h"

/**
* puts_half - Entry
* @str: the s
* Return: void
*/

void puts_half(char *str)
{
	int l = 0, k = 0;

	while (str[l] != '\0')
	{
	l++;
	}

	k = l / 2;

	for(; k < l; k++)
	{
	_putchar(str[k]);
	}
	_putchar('\n');
}
