#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * _strcat - concatenates two strings.
 * @src : variable
 * @dest : variable
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
        int i;
	int j;

        for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0' ; j++)
        {
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
        return (dest);
}
