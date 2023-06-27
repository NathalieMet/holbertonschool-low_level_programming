#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str : variable
 * Return: void
 */

void puts_half(char *str)
{
	char *end = str;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (end > str)
	{
		str++;
		end--;
	}
	while (*end != '\0')
	{
		end++;
		_putchar(*end);
	}
}
