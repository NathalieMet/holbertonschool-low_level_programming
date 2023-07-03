#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n : variable
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
