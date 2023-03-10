#include <stdio.h>

/**
* main - E
* @argc: num
* @argv: arr
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
