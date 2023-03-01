#include "main.h"

/**
* leet - Entry point
* @str: the string
* Return: the string
*/

char *leet(char *str)
{
	int index = 0, index2;
	char leet[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	while (str[index])
	{
	for (index2 = 0; index2 <= 9; index2++)
	{
	if (leet[index2] == str[index])
	str[index] = b[index2];
	}
	index++;
	}
	return (str);
}
