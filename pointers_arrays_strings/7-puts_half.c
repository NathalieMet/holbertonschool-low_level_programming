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
	int a = _strlen(str);
	int b = 0;

	if (a % 2 != 0)
		a++;

	while (*str != '\0')
	{
		if (b >= a / 2)
		{
			_putchar(*str);
		}
		str++;
		b++;
	}
	_putchar('\n');
}
