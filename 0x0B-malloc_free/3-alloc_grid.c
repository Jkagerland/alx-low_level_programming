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
	{
	free(t);
	return (NULL);
	}
	for (; i < height; i++)
	{
	t[i] = malloc(sizeof(int) * width);
	if (t[i] == NULL)
	{
	free(t);
	return (NULL);
	}
	o = 0;
	for (; o < width; o++)
	{
	t[i][o] = 0;
	}
	}

	return (t);
}
