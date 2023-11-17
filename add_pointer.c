#include "main.h"

/**
 *add_pointer - adds a pointer to a buffer
 *@ptr: the pointer to add
 *@buffer: the buffer
 *@buffer_index: the index of the buffer
 *
 *Return: buffer_index
 */
int add_pointer(void *ptr, char *buffer, int buffer_index)
{
	long int num;

	if (!buffer)
		return (0);
	if (!ptr)
		buffer_index = add_string("(nil)", buffer, buffer_index);

	num = (unsigned long int) ptr;

	buffer_index = add_char('0', buffer, buffer_index);
	buffer_index = add_char('x', buffer, buffer_index);

	buffer_index = add_hex(num, buffer, buffer_index, 'x');
	return (buffer_index);
}
