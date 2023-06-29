#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * _strcmp - compares two strings.
 * @src : variable
 * @dest : variable
 * @n : variable
 * Return: void
 */

int _strcmp(char *s1, char *s2)
{
        int i;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
        return (s1[i] - s2[i]);
}
