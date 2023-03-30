#include "main.h"

/**
 * print_cent - print character %
 * @args: varisdic parameter
 *
 * Return: number of character
 */

int print_cent(va_list args)
{
	(void)args;

	write(1, "%", 1);

	return (1);
}
