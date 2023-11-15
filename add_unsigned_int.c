#include "main.h"

/**
 *add_unsigned_int - adds unsigned integer to a buffer
 *@num: the number to add to the buffer
 *@buffer: the buffer
 *@buffer_index: the index of the buffer
 *
 *Return: buffer_index
 */
int add_unsigned_int(unsigned int num, char *buffer, int buffer_index)
{
	unsigned int n;

	n = num;

	if (n / 10 != 0)
		buffer_index = add_unsigned_int(n / 10, buffer, buffer_index);

	buffer[buffer_index] = (n % 10) + '0';
	buffer_index++;

	return (buffer_index);
}
