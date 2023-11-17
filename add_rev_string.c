#include <stdio.h>
#include "main.h"
/**
 *add_rev_string - add a reversed string to the buffer
 *@str: the string to reverse and add to the buffer
 *@buffer: the buffer
 *@buffer_index: the index of the buffer
 *
 *Return: buffer_index
 */
int add_rev_string(char *str, char *buffer, int buffer_index)
{
	int len, i;

	if (str == NULL)
	{
		buffer_index = add_string("(null)", buffer, buffer_index);
		return (buffer_index);
	}

	len = _str_len(str);

	for (i = len - 1; i >= 0; i--)
	{
		buffer[buffer_index] = str[i];
		buffer_index++;
	}

	return (buffer_index);
}
