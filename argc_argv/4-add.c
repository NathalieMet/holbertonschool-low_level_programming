#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc : argument
 * @argv : argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			result = result + atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
	}
}
