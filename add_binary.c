#include "main.h"
/**
 *add_binary - Converts a positive number to binary and adds it to a buffer
 *@num: the number to add to the buffer
 *@buffer: the buffer
 *@buffer_index: the index of the buffer
 *
 *Return: buffer_index
 */
int add_binary(unsigned int num, char *buffer, int buffer_index)
{
	unsigned int n;

	n = num;
	if (n / 2 != 0)
		buffer_index = add_binary(n / 2, buffer, buffer_index);
	buffer[buffer_index] = (n % 2) + '0';
	buffer_index++;
	return (buffer_index);
}
