#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 *_printf - produces output according to a format
 *@format: a list of types of arguments passed to the function
 *
 *Return:he number of characters printed
 *(excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	char *buffer, *str;

	int i, j, count = 0;

	va_list args;

	va_start(args, format);

	buffer = malloc(1024 * sizeof(char));

	if (buffer == NULL)
		return -1;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[count] = format[i];
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				buffer[count] = va_arg(args, int);
			}

			else if (format[i + 1] == 's')
			{
				str = va_arg(args, char *);

				for (j = 0; str[j] != '\0'; j++)
				{
					buffer[count] = str[j];
					count++;
				}
			}
			else if (format[i + 1] == '%')
			{
				buffer[count] = '%';
			}
			i++;
		}
		count++;
	}
	va_end(args);
	write(1, buffer, count);
	free(buffer);
	return (count);
}