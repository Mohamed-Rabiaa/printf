#include "main.h"

/**
 *add_string2 - adds a string to a buffer, if a character is less than 32 or
 *greater than or equal to 127 it will be added as "\x" + the hexadecimal of
 *the non printable character
 *@str: a string
 *@buffer: a buffer
 *@buffer_index: the index of the buffer
 *
 *Return: buffer_index
 */
int add_string2(char *str, char *buffer, int buffer_index)
{
	char *s;

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			if (*str < 16)
				s = "\\x0";
			else
				s = "\\x";
			buffer_index = add_string(s, buffer, buffer_index);
			buffer_index = add_hexadecimal(*str, buffer,
						       buffer_index, 'X');
		}
		else
		{
			buffer_index = add_char(*str, buffer, buffer_index);
		}
		str++;
	}
	return (buffer_index);
}
