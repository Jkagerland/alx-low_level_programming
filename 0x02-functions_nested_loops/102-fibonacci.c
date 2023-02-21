#include <stdio.h>

/**
* main - Entry
* Return: Hello
*/

int main(void)
{
	int i;
	long int temp;
	long int last_num = 2;
	long int before_last = 1;

	for (i = 0; i < 49; i++)
	{
	if (i == 0)
	printf("%ld, %ld", before_last, last_num);
	else
	{
	temp = last_num;
	last_num = before_last + last_num;
	before_last = temp;
	printf(", %ld", last_num);
	}
	}
	printf("\n");
	return (0);
}
