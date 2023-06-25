#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new
 * line.
 * Return: void
 */

void print_most_numbers(void)
{
	int nbr = 0;

	for (nbr = '0' ; nbr <= '9' ; nbr++)
	{
		if ((nbr != '2') && (nbr != '4'))
			_putchar(nbr);
	}

	_putchar('\n');
}
