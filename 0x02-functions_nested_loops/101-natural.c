#include <stdio.h>

/**
* main - Prints the sum
* Return: Always succes
*/

int main(void)
{
	int i = 0;
	int sum = 0;
	while (i < 1024)
	{
	sum += i;
	i = i + 3;
	}
	i = 0;
	while (i < 1024)
	{
	if (i % 3 == 0){
	}
	else {
	sum += i;
	}
	i = i + 5;
	}
	printf("%d\n", sum);
	return (0);
}
