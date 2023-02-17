#include <stdio.h>

/**
* main - Entry program 4
* Return: 0 (Success)
*/
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
	if (c != 'q' && c != 'e')
		putchar(c);
	c++;
}
putchar('\n');
return (0);
}
