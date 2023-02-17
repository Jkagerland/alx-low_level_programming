#include <stdio.h>

/**
* main - Entry point
* Return: 0 (Success)
*/
int main(void)
{
int i;
int f;
int g;
for (i = 0; i < 9; i++)
{
for (f = i; f < 10; f++)
{
for (g = f; g < 10; g++)
{
if (i != f && f != g && i != g)
{
putchar(i + '0');
putchar(f + '0');
putchar(g + '0');
putchar(',');

}

}

}
}
putchar('\n');

return (0);
}

