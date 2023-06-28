#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @src : variable
 * @dest : variable
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
