#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include "1-strdup.c"
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb : variable
 * @size : variable
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)ptr)[i] = 0;
	}
	return (ptr);
}
