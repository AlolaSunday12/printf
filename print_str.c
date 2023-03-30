#include "main.h"

/**
 * print_str - print variadic string character to stdout
 * @args: varisdic parameter
 * Return: number of character
 */

int print_str(va_list args)
{
	int i;
	int count = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		return (-1);

	while (str[i])
	{
		count = write(1, &str[i], 1);
		i = i + 1;
	}

	return (count);
}
