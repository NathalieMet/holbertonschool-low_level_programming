#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s : variable
 * @accept : variable
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}
	return (NULL);
}
