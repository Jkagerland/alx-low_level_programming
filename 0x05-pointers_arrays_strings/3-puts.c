#include "main.h"

/**
* _puts - entry
* @str: the string
* Return: 0
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
