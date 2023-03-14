#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - Entry
* @width: w
* @height: h
* Return: 0
*/
int **alloc_grid(int width, int height)
{
	int **t;
	int i, o;

	i = 0;
	o = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	t = malloc(sizeof(int) * height);
	if (t == NULL)
		return (NULL);
	while (i < height)
	{
	t[i] = malloc(sizeof(int) * width);
	if (t[i] == NULL)
		return (NULL);
	o = 0;
	for (; o < width; o++)
	{
	t[i][o] = 0;
	}
	i++;
	}

	return (t);
}
