#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include "1-strdup.c"
/**
 * str_concat - concatenates two strings.
 * char.
 * @s1 : variable
 * @s2 : variable
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i;
	int j;
	int k;

	if  (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (_strdup(s2));
	if (s2 == NULL)
		return (_strdup(s1));

	for (j = 0; s1[j] != '\0'; j++)
	{
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
	}
	ar = malloc((j + k + 1));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		ar[i] = s1[i];
	for (i = 0; i < k; i++)
		ar[j + i] = s2[i];

	ar[j + i] = '\0';
	return (ar);
}
