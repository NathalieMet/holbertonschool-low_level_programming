#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * print_array -  prints n elements of an array of integers, followed by a new
 * line.
 * @a : variable
 * @n : variable
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	if (i < n - 1)
	{
		printf(", ");
	}
}
	printf("\n");
}
