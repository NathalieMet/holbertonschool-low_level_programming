#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include "1-strdup.c"
/**
 * array_range - creates an array of integers.
 * @min : variable
 * @max : variable
 * Return: int
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i <= max - min; i++)
		{
			ptr[i] = min + i;
		}
	return (ptr);
}
