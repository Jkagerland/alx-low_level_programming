#include "main.h"
/**
* _isalpha - Checks for alphabetic chars
* @c: The char
* Return: 1 for alphabetic char 0 for else
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
