
#include <stdio.h>

/**
* main - Entry point
* Return: 0 (Success)
*/
int main(void)
{
int i;
int f;

for (i = 0; i < 9; i++)
{
for (f = i; f < 10; f++)
{
if (i != f)
{
putchar(i + '0');
putchar(f + '0');
if (i < 8)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
