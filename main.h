#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);

/**
 * struct funct - contain members
 * @t: character specifier
 * @f: point
 */
typedef struct funct
{
	char *t;
	int (*f)(va_list);
} func_t;

int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);
int print_dint(va_list args);
int print_int(va_list args);

#endif /* _MAIN_H_ */
