#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * char.
 * @str : variable
 * Return: char
 */
char *_strdup(char *str)
{
	char *ar;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	ar = malloc((j + 1));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
		ar[i] = str[i];
	ar[i] = '\0';
	return (ar);
}
