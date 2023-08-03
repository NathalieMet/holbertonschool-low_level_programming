#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include "main.h"

/**
 * print_binary- prints the binary representation of a number.
 * @n:decimal number
 * Return: void
 */
void print_binary(unsigned long int n)
{
int i = 63;

if (n == 0)
_putchar ('0');

while (i >= 0 && (n & (1 << i)) == 0)
{
i--;
}
for (; i >= 0; i--)
{
if ((n & (1 << i)) != 0)
{
_putchar('1');
}
else
{
_putchar('0');
}
}
}
