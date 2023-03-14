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
	if (width <= 0 || height <= 0)
	{
	free(t);
	return (NULL);
	}
	t = malloc(sizeof(int) * (height + 1));
	if (t == NULL)
	{
	free(t);
	return (NULL);
	}
	for (int i = 0; i < height; i++)
	{
	t[i] = malloc(sizeof(int) * (width + 1));
	if (t[i] == NULL)
	{
	free(t);
	return (NULL);
	}
	for (int o = 0; o < width; o++)
	{
	t[i][o] = 0;
	}
	}

	return (t);
}
