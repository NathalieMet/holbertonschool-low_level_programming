#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	char characters;

	for (characters = 'a' ; characters <= 'z' ; characters++)
	{
		if (characters != 'e' && characters != 'q')
			putchar (characters);
	}
		putchar ('\n');
		return (0);
}
