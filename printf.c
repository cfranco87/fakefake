#include <stdarg.h>
#include "main.h"
#include <stdio.h>
/**
 *_printf - print f function
 *@format: format
 *Return: amount of chars printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;

form_t specifiers[] = {
	{"s", print_s},
	{"c", print_c},
	{"d", print_d},
	{"i", print_d},
	{"%", print_p},
	{0, NULL},
};

	if (format == NULL)
	return (-1);

	va_start(args, format);
	count = call_functions(format, specifiers, args);
	va_end(args);
	return (count);

}
