#include "main.h"
/**
* call_functions - call the needed function
*@format: the specific format
*@args: arguments
*@specifiers: tha array with the format functions
*Return: amount of printed char
*/

int call_functions(const char *format, form_t specifiers[], va_list args)
{
	int i, j, f_val, count;

	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
	if (format[i] == '%')
	{
	for (j = 0; specifiers[j].form != NULL; j++)
	{
	if (format[i + 1] == specifiers[j].form[0])
	{
	f_val = specifiers[j].f(args);
	if (f_val == -1)
	return (-1);
	count += f_val;
	break;
	}
	}
if (specifiers[j].form == NULL && format[i + 1] != ' ')
	{
	if (format[i + 1] != '\0')
	{
	_putchar(format[i]);
	_putchar(format[i + 1]);
	count += 2;
	}
	else
	return (-1);
	}
	i += 1;
	}
	else
	{
	_putchar(format[i]);
	count++;
	}
	}
	return (count);
}
