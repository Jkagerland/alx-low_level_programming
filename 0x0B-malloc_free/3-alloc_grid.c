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
	{
	return (NULL);
	}
	t = malloc(sizeof(int) * (height + 1));
	if (t == NULL)
		return (NULL);

	for (; i < height; i++)
	{
	o = 0;
	t[i] = malloc(sizeof(int) * (width + 1));
	if (t[i] == NULL)
	{
		for (o = 0; o < i; o++)
			free(t[o]);
		return (NULL);
	}
	for (o = 0; o < width; o++)
	{
	t[i][o] = 0;
	}
	}

	return (t);
}
