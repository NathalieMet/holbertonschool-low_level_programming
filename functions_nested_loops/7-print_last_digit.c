#include <limits.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @n : variable
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int a = (n % 10);

	if (n > 0)
	{
		_putchar ('0' + a);
		return (a);
	}
	else
	{
		int b = (a * (-1));

	_putchar ('0' + b);
	return (b);
	}
}
