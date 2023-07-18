#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array.
 * @array: pointeur sur tableau
 * @size: taille
 * @action : pointeur sur fonction
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	action(array[i]);
}
