#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input array
 * @height: height input array
 * Return: pointer to 2 dimimensional array
 */
int **alloc_grid(int width, int height)
{
	int **tdarr;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	tdarr = malloc(sizeof(tdarr) * height);/* Allocates memory */
	if (tdarr == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		tdarr[a] = malloc(sizeof(int) * width);
		if (tdarr[a] == NULL)
		{
			for (; a >= 0; a--)
				free(tdarr[a]);
			free(tdarr);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			tdarr[a][b] = 0;
	}
	return (tdarr);
}
