#include"main.h"
#include<stdlib.h>
/**
 * free_grid - the free
 * @grid: grid
 * @height: height
 * Return:0
 */
void free_grid(int **grid, int height)
{
	int j = 0;

	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
