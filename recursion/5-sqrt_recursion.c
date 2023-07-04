#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _sqrt_helper - avoid overflow
 * _sqrt_recursion - returns the natural square root of a number.
 * @n : variable
 * @x : variable
 * Return: void
 */
int _sqrt_helper(int n, int x);
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
int _sqrt_helper(int n, int x)
{
float q;

	if (n <= 0)
		return (-1);
	if (x * x > n)
		return (-1);
	q = (float)n / x;
	if (q == x)
		return ((int)q);
	return (_sqrt_helper(n, x + 1));
}
