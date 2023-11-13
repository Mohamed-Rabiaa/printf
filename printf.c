#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

int printc(char c);
int prints(char *s);

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

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			count += printc(format[i]);
		else
		{
			switch (format[i + 1])
			{
			case 'c':
				count += printc(va_arg(args, int));
				i++;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					count += prints("(null)");
				else
				{
					count += prints(str);
					i++;
				}
				break;
			case '%':
				count += printc('%');
				i++;
				break;
			case '\0':
				return (-1);
			default:
				count += printc(format[i]);
				break;
			}
		}
	}
	va_end(args);
	return (count);
}

/**
 *printc - prints a char
 *@c: the char to be prented
 *
 *Return: on success 1
 *on erro -1
 */
int  printc(char c)
{
	return (_putchar(c));
}

/**
 *prints - prints a string
 *@s: the string to print
 *
 *Return: the length of the string
 */
int prints(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
