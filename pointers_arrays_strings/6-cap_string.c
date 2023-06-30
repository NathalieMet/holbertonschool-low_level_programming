#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s : variable
 * Return: char
 */

char *cap_string(char *s)
{
	int i;
	int flag = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
|| s[i] == ';'|| s[i] == '.'|| s[i] == '!'|| s[i] == '?'|| s[i] == '"'
		    || s[i] == '('|| s[i] == ')'|| s[i] == '{'|| s[i] == '}')

		{
			flag = 1;
		continue;
		}
		if (flag == 1)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			flag = 0;
		}
	}
		return (s);
}
