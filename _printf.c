#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
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

	char buffer[BUFF_SIZE];

	int i, buffer_index = 0;

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
			buffer[buffer_index] = format[i];
			buffer_index++;
		}
		else
		{
			switch (format[i + 1])
			{
			case 'c':
				buffer_index = add_char(va_arg(args, int),
							buffer, buffer_index);
				i++;
				break;
			case 's':
				str = va_arg(args, char *);
				buffer_index = add_string(str, buffer,
							   buffer_index);
				i++;
				break;
			case 'S':
				str = va_arg(args, char *);
				buffer_index = add_string2(str, buffer,
							   buffer_index);
				i++;
				break;
			case '%':
				buffer[buffer_index] = '%';
				buffer_index++;
				i++;
				break;
			case 'i':
			case 'd':
				buffer_index = add_int(va_arg(args, int),
						 buffer, buffer_index);
				i++;
				break;
			case 'b':
				buffer_index = add_binary(va_arg(args,
					unsigned int), buffer, buffer_index);
				i++;
				break;
			case 'u':
				buffer_index = add_unsigned_int(va_arg(
				     args, unsigned int), buffer, buffer_index);
				i++;
				break;
			case 'o':
				buffer_index = add_octal(va_arg(args,
					unsigned int), buffer, buffer_index);
				i++;
				break;
			case 'x':
				buffer_index = add_hexadecimal(va_arg(args,
				unsigned int), buffer, buffer_index, 'x');
				i++;
				break;
			case 'X':
				buffer_index = add_hexadecimal(va_arg(args,
				unsigned int), buffer, buffer_index, 'X');
				i++;
				break;
			case 'p':
				buffer_index = add_pointer(va_arg(args, void *),
							  buffer, buffer_index);
				i++;
				break;
			case '\0':
				return (-1);
			default:
				buffer[buffer_index] = format[i];
				buffer_index++;
				break;
			}
		}
		buffer[buffer_index] = '\0';
	if (buffer_index == BUFF_SIZE)
	{
		write(1, buffer, buffer_index);
		buffer_index = 0;
	}
}
	if (buffer_index > 0)
	{
		buffer[buffer_index] = '\0';
		write(1, buffer, buffer_index);
	}
va_end(args);
return (buffer_index);
}
