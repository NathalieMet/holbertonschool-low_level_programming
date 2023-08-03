#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include "main.h"

/**
 * get_bit- returns the value of a bit at a given index.
 * @n:decimal number
 * @index:index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 63)
	return (-1);
	result = (n >> index) & 1;
	return (result);
	}
