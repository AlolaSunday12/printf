#include "main.h"

/**
 * check_specifier - chech specifier
 * @format: input specifier
 *
 * Return: Return function pointer
 */

int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t my_array[6] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{"d", print_dint},
		{"i", print_int},
		{NULL, NULL}};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}
	}

	return (NULL);
}
