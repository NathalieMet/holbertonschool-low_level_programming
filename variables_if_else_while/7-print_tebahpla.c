#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  prints the lowercase alphabet in reverse, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	char characters = 'z';

	for (characters = 'z' ; characters >= 'a' ; characters--)
	{
		putchar (characters);
	}
	putchar ('\n');
	return (0);
}
