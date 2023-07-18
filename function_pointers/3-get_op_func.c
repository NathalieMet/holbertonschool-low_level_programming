#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * get_op_func -  selects the correct function to perform the operation asked by
 * the user.
 * @a: variable
 * @b: variable
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
int i;
