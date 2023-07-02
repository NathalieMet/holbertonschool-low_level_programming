#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * _atoi - convert a string to an integer.
 * @s : variable
 * Return: void
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned long num = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + s[i] - '0';
		i++;
		if ((num > 2147483647UL && sign > 0) || (num > 2147483648UL && sign
							 < 0))
			return (0);
	}
	return ((int)num * sign);
}
