#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			while (i >= 0)
				free(g[i--]);
			free(g);
			return (NULL);
		}


		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}

	return (g);
}
