#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - Entry
* @s1: string
* @s2: s
* Return: 0
*/
char *str_concat(char *s1, char *s2)
{
	int i, m;
	char *s;

	i = 0;
	m = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[m] != '\0')
		m++;
	s = malloc(sizeof(char) * (m + i + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	if (s1 != NULL)
	{
	while (s1[i] != '\0')
	{
	s[i] = s1[i];
	i++;
	}
	}
	m = i;
	i = 0;
	if (s2 != NULL)
	{
	while (s2[i] != '\0')
	{
	s[m + i] = s2[i];
	i++;
	}}
	return (s);
}
