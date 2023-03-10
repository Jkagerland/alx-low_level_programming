#include "main.h"

/**
* _strcmp - Entry point
* @s1: s
* @s2: s
* Return: 0
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
