#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a
* 2 dimensional array of integers.
* @width: width of array
* @height: height of array
* Return: a pointer to a 2 dimensional array of integers.
*/
int **alloc_grid(int width, int height)
{
	int **tableau, i, j;

	tableau = malloc(sizeof(*tableau) * height);
	if (width <= 0 || height <= 0 || tableau == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tableau[i] = malloc(sizeof(**tableau) * width);
			if (tableau[i] == 0)
			{
				while (i--)
					free(tableau[i]);
				free(tableau);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				tableau[i][j] = 0;
		}
	}
	return (tableau);
}
