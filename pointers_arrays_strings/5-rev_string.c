#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string.
 * @s : variable
 * Return: void
 */

void rev_string(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (end > s)
	{
		char temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}
}
