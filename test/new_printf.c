#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

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

	char buffer[1024];

	int i, j, count = 0;

	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[count] = format[i];
			count++;
		}
		else
		{
			switch (format[i + 1])
			{
			case 'c':
				buffer[count] = va_arg(args, int);
				count++;
				i++;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					count += print_string("(null)");
				else
				{
					for (j = 0; str[j] != '\0'; j++)
					{
						buffer[count] = str[j];
						count++;
					}
					i++;
				}
				break;
			case '%':
				buffer[count] = '%';
				count++;
				i++;
				break;
			case 'i':
			case 'd':
				count += add_int(va_arg(args, int),
						 buffer, count);
				i++;
				break;
			case 'b':
				count += print_binary(va_arg(args, unsigned int)
						      , 0);
				i++;
				break;
			case 'u':
				buffer[count] = va_arg(args, unsigned int) +
					'0';
				count++;
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
