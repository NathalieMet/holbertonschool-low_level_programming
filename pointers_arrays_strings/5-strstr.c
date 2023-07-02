#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * _strstr - locates a substring.
 * @haystack : variable
 * @needle : variable
 * Return: void
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;
	char *q;

	while (*haystack != '\0')
	{
		p = haystack;
		q = needle;
		while (*p == *q && *p != '\0' && *q != '\0')
		{
			p++;
			q++;
		}
		if (*q == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
