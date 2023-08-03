#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include "main.h"

/**
 *clear_bit- sets the value of a bit to 0 at a given index.
 * @n:decimal number
 * @index:index
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int mask = (1UL << index);

	if (index > 63)
		return (-1);

	*n &= ~mask;

	return (1);
}
