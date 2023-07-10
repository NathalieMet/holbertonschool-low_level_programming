#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * char.
 * @size : argument
 * @c : argument
 * Return: char
 */
char *_strdup(char *str)
{
        char *ar;
        int i;
	int j;

	for (j = 0; str[j] != '\0'; j++)
	if (j == 0)
        {
                return (NULL);
        }
        ar = malloc((j + 1) * sizeof(char));
        if (ar == NULL)
                return (NULL);
        for (i = 0; i < j; i++)
                ar[i] = str[i];
	ar [i] = '\0';
        return (ar);
}
