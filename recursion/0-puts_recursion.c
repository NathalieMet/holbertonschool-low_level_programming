#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * null byte (\0), to the buffer pointed to by dest.
 * @s : variable
 * Return: void
 */
void _puts_recursion(char *s)
{
	{
		if (*s != '\0')
		_putchar (*s);
	s++;
if (*s != '\0')
	_puts_recursion(s);
	}
if (*s == '\0')
{
	_putchar ('\n');
}
}
