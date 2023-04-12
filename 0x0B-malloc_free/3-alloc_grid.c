#include <stdlib.h>
/**
 *alloc_grid - create a 2d array and initiate it
 *@width: width parameter
 *@height: height parameters
 *Return: returns NULL or ptr
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	ptr = malloc(sizeof(int *) * height);

	if (!ptr)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (!ptr[i])
		{
			for (; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
