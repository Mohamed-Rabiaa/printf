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
			case 'u':
				count += print_unsigned_int(va_arg(args,
							unsigned int), 0);
				i++;
				break;
			case 'o':
				count += print_octal(va_arg(args,
							unsigned int), 0);
				i++;
				break;
			case 'x':
				count += print_hexadecimal(va_arg(args,
						unsigned int), 0, 'x');
				i++;
				break;
			case 'X':
				count += print_hexadecimal(va_arg(args,
						unsigned int), 0, 'X');
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
