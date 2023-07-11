#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid
 * function.
 * char.
 * @grid : variable
 * @height : variable
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;
	
	for (i = 0; i < height; i++)
		free (grid[i]);
	free (grid);
}
