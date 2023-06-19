#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	char characters = 'a';

	for (characters = 'a' ; characters <= 'z' ; characters++)
		putchar (characters);
		putchar ('\n');
	return (0);
}
