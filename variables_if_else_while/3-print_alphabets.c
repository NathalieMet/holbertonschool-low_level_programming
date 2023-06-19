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
	char CHARACTERS = 'A';

	for (characters = 'a' ; characters <= 'z' ; characters++)
	{
		putchar (characters);
	}

	for (CHARACTERS = 'A' ; CHARACTERS <= 'Z' ; CHARACTERS++)
	{
		putchar (CHARACTERS);
	}
	putchar ('\n');
	return (0);
}
