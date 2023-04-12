#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - to free up previously allocated space
 *@grid: grid parameter
 *@height: height parameter
 *Return: Void
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
