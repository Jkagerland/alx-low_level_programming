#include <stdio.h>

/**
* main - Entry
* Return: Hello
*/

int main(void)
{
	int i;
	int temp;
	long last_num = 2;
	long before_last = 1;

	for(i = 0; i < 50; i++)
	{
	if (i == 0)
	printf("%ld, %ld, ", before_last, last_num);
	else
	{
	temp = last_num;
	last_num = before_last + last_num;
	before_last = temp;
	if (i != 49)
	printf("%ld, ", last_num);
	else
	printf("%ld", last_num);
	}
	}
	printf("\n");
	return (0);
}
