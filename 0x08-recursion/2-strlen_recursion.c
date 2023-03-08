#include <stdio.h>
/**
 * _strlen_recursion - Entry;
 * @s: the string
 * Return: len of string
 */

int _strlen_recursion(char *s)
{
int i = 0;

if (*s)
    {
        i++;
        i += _strlen_recursion(s+1);
    }

    return i;
}

