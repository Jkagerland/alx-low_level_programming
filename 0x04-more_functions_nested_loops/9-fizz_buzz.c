#include <stdio.h>

/**
* main - Entry
* Return: 0
*/

int main(void)
{
	int i = 0;

	for(; i <= 100; i++)
	{
	if ((i % 3) == 0 || (i % 5) == 0)
	{
	if (i % 3)
	{
	printf("Fizz");
	}
	if (i % 5)
	{
	printf("Buzz");
	}
	} else
	{

	printf("%d", i);

	}
	if (i != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
