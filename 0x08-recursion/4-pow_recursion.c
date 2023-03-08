#include "main.h"
/**
* _pow_recursion - Entry
* @x: t
* @y: t
* Return: the nums
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y >= 2)
	{
	x = x * _pow_recursion(x, y - 1);
	}
	return (x);
}
