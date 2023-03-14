#include "main.h"
#include <stdlib.h>
/**
* create_array - Entry point
* @size: i
* @c: char
* Return: 0
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;
	s = malloc(sizeof(char) * (size));
	if (s == NULL || size == 0)
	{
	return (NULL);
	}
	while (i < size)
	{
	s[i] = c;
	i++;
	}
	return (s);
}
