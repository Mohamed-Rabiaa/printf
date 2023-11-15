#include "main.h"

/**
 *add_octal - converts a number to octal and adds it to a buffer
 *@num: the number to convert
 *@buffer: the buffer
 *@buffer_index: the index of the buffer
 *
 *Return: buffer_index
 */
int add_octal(unsigned int num, char *buffer, int buffer_index)
{
	unsigned int n;

	n = num;

	if (n / 8 != 0)
		buffer_index = add_octal(n / 8, buffer, buffer_index);

	buffer[buffer_index] = (n % 8) + '0';
	buffer_index++;

	return (buffer_index);
}
