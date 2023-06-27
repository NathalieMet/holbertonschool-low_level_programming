#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str : variable
 * Return: void
 */

void puts_half(char *str)
{
	char *end = str;
	int a = _strlen(str);

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
		if (a % 2 == 0)
		_putchar(*end);
		else
			_putchar(*end++);
	}
	_putchar('\n');
}
