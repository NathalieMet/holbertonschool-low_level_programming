#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include "1-strdup.c"
/**
 * string_nconcat - concatenates two strings.
 * @s1 : variable
 * @s2 : variable
 * @n : variable
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i;
	unsigned int j;
	unsigned int k;

	if (s1 == NULL && s2 == NULL)
		return (strdup("\0"));
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j] != '\0'; j++)
	{
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
	}
	if (n >= k)
	{
		n = k;
	}
	else
	{
		k = n;
	}
	ar = malloc((j + k + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		ar[i] = s1[i];
	for (i = 0; i < k; i++)
		ar[j + i] = s2[i];

	ar[j + i] = '\0';
	return (ar);
}
