#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s : variable
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char *end = s;

	if (*s != '\0')
	{
		end++;
		_print_rev_recursion(end);
	}
	end--;
	if (end >= s)
	{
		_putchar (*end);
	}
}
