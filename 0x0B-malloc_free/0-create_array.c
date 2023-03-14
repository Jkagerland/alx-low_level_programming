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

	if (size == 0)
	{
	return (NULL);
	}
	s = malloc(sizeof(char) * (size + 1));
	while (i < size)
	{
	s[i] = c;
	i++;
	}
	s[i] = '\0';
	return (s);
}
