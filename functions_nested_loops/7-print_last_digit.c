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
	_putchar (n % 10);
	return (n % 10);
}
