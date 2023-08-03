#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include "main.h"

/**
 *flip_bits- returns the number of bits
 * @n:number
 * @m:number
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif = n ^ m;
	unsigned long int i = 0;

	while (dif > 0)
	{
		if (dif & 1)
			i++;
		dif >>= 1;
	}
	return (i);
}
