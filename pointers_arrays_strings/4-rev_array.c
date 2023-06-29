#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a : variable
 * @n : variable
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
