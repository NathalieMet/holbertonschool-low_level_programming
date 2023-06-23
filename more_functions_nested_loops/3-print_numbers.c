#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: Always 0.
 */

void print_numbers(void)
{
	int nbr = 0;
		for (nbr = '0' ; nbr <= '9' ; nbr++)
		{
			_putchar(nbr);
		}
	_putchar('\n');
}
