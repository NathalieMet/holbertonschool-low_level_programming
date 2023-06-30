#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * _strspn - gets the length of a prefix substring.
 * @s : variable
 * @accept : variable
 * Return: void
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s)
	{
		char *a = accept;
		int found = 0;

		while (*a)
		{
			if (*s == *a)
			{
				len++;
				found = 1;
				break;
			}
			a++;
		}
		if (!found)
			break;
		s++;
	}
	return (len);
}
