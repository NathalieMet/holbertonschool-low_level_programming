#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * prints - prints a string
 * @args: arguments
 * Return: void
 */
void prints(va_list args)
{
	char *str = va_arg(args, char*);

	if (str == NULL)
	str = "(nil)";
	printf("%s", str);
}
/**
 * printc - prints a char
 * @args: arguments
 * Return: void
 */
void printc(va_list args)
{
			char c = va_arg(args, int);

			printf("%c", c);
}
/**
 * printd - prints an int
 * @args: arguments
 * Return: void
 */
void printd(va_list args)
{
			int d = va_arg(args, int);

			printf("%d", d);
}
/**
 * print_f - prints a float
 * @args: arguments
 * Return: void
 */
void print_f(va_list args)
{
			double f = va_arg(args, double);

			printf("%f", f);

}

/**
 * print_all - prints anything.
 * @format: liste de types d'arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	ftype_t print[] = {
	{"s", prints},
	{"c", printc},
	{"i", printd},
	{"f", print_f},
};
va_list args;
int i = 0;
int j;
char *separator = "";

va_start(args, format);
while (format != NULL && format[i] != '\0')
{
	j = 0;

	while (j < 4)
	{
		if (format[i] == *print[j].ftype)
		{
			printf("%s", separator);
			print[j].f(args);
			separator = ", ";
			break;
		}
	j++;
	}
i++;
}
va_end(args);
printf("\n");
}
