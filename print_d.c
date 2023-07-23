#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 *print_d - prints an integer in base 10
 *@args: the argumetns it receives
 *Return: amount of printed chars
 */
int print_d(va_list args)
{
	long int num = va_arg(args, long int);
	char digit[20];
	int p = 0;
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		count++;
		if (num == INT_MIN)
		{
			digit[p++] = '0' + (num % 10) * -1;
			num = -(num / 10);
		}
	}
	do {
		digit[p++] = '0' + (num % 10);
		num /= 10;
	} while (num > 0);

		while (p > 0)
		{
			_putchar(digit[--p]);
			count++;
		}
	return (count);
}

