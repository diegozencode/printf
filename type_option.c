#include "holberton.h"
#include <stdio.h>
/**
 * type_option - look for the option
 *
 * @ch: character string format
 * @args: arguments
 *
 * Return: number of characters
 */
int type_option(char ch, va_list args)
{
	unsigned int i = 0, num = 0;

	optype_t list[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	while (list[i].c != NULL)
	{
		if (ch == list[i].c[0])
			num += list[i].f(args);
		i++;
	}
	return (num);
}