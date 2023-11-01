#include"main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: grid of mem
 * @height: int
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
		free(grid([n]);
			free(grid);
}
