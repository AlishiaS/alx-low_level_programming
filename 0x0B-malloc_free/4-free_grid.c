#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	for (; a < height; a++)
		free*(grid[a]);

	free(grid);
}
