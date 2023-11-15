#include "main.h"
/**
 *add_char - adds a char to a buffer
 *@c: the char to add
 *@buffer: the buffer
 *@buffer_index: the index of the buffer
 *
 *Return: buffer_index
 */
int add_char(char c, char *buffer, int buffer_index)
{
	buffer[buffer_index] = c;
	buffer_index++;

	return (buffer_index);
}
