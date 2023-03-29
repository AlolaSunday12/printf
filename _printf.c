#include "main.h"
/**
 * _printf - new version of printf function
 * @format: input take chatacter specifier
 * Return: value
 */
int _printf(const char *format, ...)
{
	unsigned int i, count, value;
	int (*f)(va_list);
	va_list args;

	count = 0;
	value = 0;
	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{ value = write(1, (format + i), 1);
			count = count + value;
			i++;
			continue; }
		if (format[i] == '%')
		{
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count = count + value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
			{
				break;
			}
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				count = count + value;
				i = i + 2;
				continue;
			}
		}
	}
	return (count);
}
