#include "main.h"
/**
 * print_alphabet - prints 10 times the alphabet, in lowercase, followed by a
 * new line.
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{char chara;
int nbr = 0;

	while (nbr < 9)
	{
		for (chara = 'a'; chara <= 'z' ; chara++)
		{
			_putchar(chara);
		}
		_putchar ('\n');
	nbr++;
	}
}
