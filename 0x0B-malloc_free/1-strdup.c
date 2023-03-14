#include "main.h"
#include <stdlib.h>
/**
* _strdup - Entry
* @str: s
* Return: 0
*/

char *_strdup(char *str)
{
	int i = 0;
	char *s;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[i])
		i++;

	s = malloc(sizeof(char) * i);

	if (s == NULL)
	{
	return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
	s[i] = str[i];
	i++;
	}

	return (s);
}
