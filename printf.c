#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

int print_char(char c);
int print_string(char *s);
int print_int(int num, int digitcoutn);

/**
 *_printf - produces output according to a format
 *@format: a list of types of arguments passed to the function
 *
 *Return:he number of characters printed
 *(excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	char *str;

	int i, count = 0;

	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			count += print_char(format[i]);
		else
		{
			switch (format[i + 1])
			{
			case 'c':
				count += print_char(va_arg(args, int));
				i++;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					count += print_string("(null)");
				else
				{
					count += print_string(str);
					i++;
				}
				break;
			case '%':
				count += print_char('%');
				i++;
				break;
			case 'i':
			case 'd':
				count += print_int(va_arg(args, int), 0);
				i++;
				break;
			case 'b':
				count += print_binary(va_arg(args, unsigned int)
						      , 0);
				i++;
				break;
			case '\0':
				return (-1);
			default:
				count += print_char(format[i]);
				break;
			}
		}
	}
	va_end(args);
	return (count);
}

/**
 *print_char - prints a char
 *@c: the char to be prented
 *
 *Return: on success 1
 *on erro -1
 */
int  print_char(char c)
{
	return (_putchar(c));
}

/**
 *print_string - prints a string
 *@s: the string to print
 *
 *Return: the length of the string
 */
int print_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

/**
 *print_int - prints an integer and returns its number of digits
 *@num: the integer to print
 *@digitcount: the number of digits in num
 *
 *Return: the number of digits in num
 */
int print_int(int num, int digitcount)
{
	unsigned int n;

	n = num;

	if (num < 0)
	{
		_putchar('-');
		n = -num;
		digitcount++;
	}

	if (n / 10 != 0)
		digitcount = print_int(n / 10, digitcount);
	_putchar((n % 10) + '0');
	digitcount++;

	return (digitcount);
}
