#include <stdio.h>

/**
* print_array - Entry point
* @a: the num1
* @n: the num2
* Return: 0
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");

}
