#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str : variable
 * Return: void
 */

void _puts(char *str)

{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	putchar('\n');
}
