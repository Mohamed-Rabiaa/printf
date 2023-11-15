#include "main.h"
/**
 *add_int - adds an integer to a buffer
 *@num: the integer to add
 *@buffer: the buffer in which the integer will be added
 *@buffer_index: the index of the buffer
 *
 *Return: buffer_index
 */
int add_int(int num, char *buffer, int buffer_index)
{
	unsigned int n;

	n = num;

	if (num < 0)
	{
		buffer[buffer_index] = '-';
		n = -num;
		buffer_index++;
	}

	if (n / 10 != 0)
		buffer_index = add_int(n / 10, buffer, buffer_index);
	buffer [buffer_index] = (n % 10) + '0';
	buffer_index++;

	return (buffer_index);
}
