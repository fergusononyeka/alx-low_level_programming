#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid -A funtion to frees 2d array
 * @grid: 2d grid array
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: void
 *
 */
void free_grid(int **grid, int height)
{
	int count = 0;

	while (count < height)
	{
		free(grid[count]);
		count++;
	}
	free(grid);
}
