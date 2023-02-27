#include <stdio.h>

/**
* _strlen - Return the length of a string
* @str: The
* Return: 0
*/

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
