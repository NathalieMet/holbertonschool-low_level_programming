#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - multiplies two numbers.
 * @argc : argument
 * @argv : argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
