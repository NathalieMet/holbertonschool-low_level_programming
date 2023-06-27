#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str : variable
 * Return: void
 */

void puts2(char *str)
{
	int a = _strlen(str);
	int b = 0;

	while (a > b)
	{
		_putchar(str[b]);
		b += 2;
	}
	putchar('\n');
}
