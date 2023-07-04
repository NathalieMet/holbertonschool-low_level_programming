#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise
 * return 0.
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
int is_prime_helper(int n, int y);
int is_prime_number(int n)
{
	return (is_prime_helper(n, 1));
}
int is_prime_helper(int n, int y)
{
	int result;
	int racine = _sqrt_recursion(n);

{
	if (n <= 1)
		return (0);
	result = n % y;
		if (result == 0 && y != 1)
	    return (0);
	if (y > racine)
		return (1);
	else
			return (is_prime_helper(n, y + 1));
}
}
