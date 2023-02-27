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
	if (l % 2 == 1)
	{
	k = (l - 1) / 2;
	k += 1;
	}
	else
	{
	k = l / 2;
	}

	for (; k < l; k++)
	{
	_putchar(str[k]);
	}
	_putchar('\n');
}
