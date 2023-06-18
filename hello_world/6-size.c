#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled and
 * run on.
 *
 * Return: Always 0.
 */

int main(void)

{
	char char_type;
	int int_type;
	long int long_int_type;
	long long int long_long_int_type;
	float float_type;

	printf("Size on a char: %zu byte(s)\n", sizeof(char_type));
	printf("Size on an int: %zu byte(s)\n", sizeof(int_type));
	printf("Size on a long int: %zu byte(s)\n", sizeof(long_int_type));
	printf("Size on a long long int: %zu byte(s)\n",
		sizeof(long_long_int_type));
	printf("Size on a float: %zu byte(s)\n", sizeof(float_type));

	return (0);
}
