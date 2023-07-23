#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_s - print a string
 * @args: the string that printf recieve
 * Return: amount of printed chars
 */
int print_s(va_list args)
{
	int i;
	char *str;
	int count = 0;

	str = (va_arg(args, char *));
	if (!str)
		str = "(null)";
	if (str[0] == '\0')
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
	count += _putchar(str[i]);
	}
	return (count);
}

/**
 *print_c - prints a char
 *@args: the arguments that printf recieve
 *Return: amount of printed chars
 */

int print_c(va_list args)
{
	char c = (char)(va_arg(args, int));

	_putchar(c);

	return (1);
}

/**
*print_p - print sign.
*@args: arguments.
* Return: count chars.
*/

int print_p(va_list args)
{
	(void)args;
	_putchar('%');
return (1);
}
