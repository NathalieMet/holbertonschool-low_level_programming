#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint- converts a binary number to an unsigned int.
 * @b:binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int valeur = 0;
	unsigned int exp = 1;

	if (b == NULL)
	return (0);

	while (b[i] != 0)
	{
		if (b[i] - '0' == 0 || b[i] - '0' == 1)
		i++;
		else
		return (0);
	}
	i--;

	while (i >= 0)
	{
		valeur += (b[i] - '0') * exp;
		exp *= 2;
	i--;
	}
return (valeur);
}
