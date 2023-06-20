#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0, followed
 * by a new line.
 * Return: Always 0.
 */

int main(void)
{
	int nbr = 0;

	for (nbr = 0 ; nbr < 10 ; nbr++)
	{
		putchar('0' + nbr);
		if (nbr < 9)
		putchar(',');
		putchar(' ');
		if (nbr == 9)
			putchar('\n');
	}
	return (0);
}
