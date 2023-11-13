#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

void printc(char c);
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

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			printc(format[i]);
		else
		{
			switch (format[i + 1])
			{
			case 'c':
				printc(va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char *);
				prints(str);
				break;
			case '%':
				printc('%');
				break;
			default:
				printc(format[i]);

				break;
			}
			i++;
		}
		count++;
	}
	va_end(args);
	return (count);
}

/**
 *printc - prints a char
 *@c: the char to be prented
 */
void printc(char c)
{
	_putchar(c);
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
