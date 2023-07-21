#ifndef BIBLI
#define BIBLI
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * struct type - Struct type
 *
 * @ftype: The type
 * @f: function
 */
typedef struct type
{
	char *ftype;
	void (*f)();

} ftype_t;
void prints(va_list args);
void printc(va_list args);
void printd(va_list args);
void print_f(va_list args);
void print_all(const char * const format, ...);
#endif
