#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * main - adds positive numbers.
 * @argc : argument
 * @argv : argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;
	int arg;

	if (argc < 2)
		printf("0\n");
	for (arg = 1; arg < argc; arg++)
		if (!isdigit(argv[arg][0]))
		{
			printf("Error\n");
			return (1);
		}
	for (i = 1; i < argc; i++)
		result = result + atoi(argv[i]);
	printf("%d\n", result);
	return (0);
}
