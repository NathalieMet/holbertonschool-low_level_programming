#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n : variable
 * Return: void
 */
int _sqrt_recursion(int n)
{
	float q;

	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	q = (float)n / _sqrt_recursion(n - 1);
	if (q == _sqrt_recursion(n - 1))
		return ((int)q);
	return (-1);
}
