#include "main.h"
#include <stdlib.h>
/**
* free_grid - Entry
* @grid: t
* @height: t
* Return: 0
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
