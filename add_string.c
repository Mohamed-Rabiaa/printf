#include <stdio.h>
#include "main.h"
/**
 *add_string - add a string to the buffer
 *@s: the string to add to the buffer
 *@buffer: the buffer
 *@buffer_index: the index of the buffer
 *
 *Return: buffer_index
 */
int add_string(char *s, char *buffer, int buffer_index)
{
	int i;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (buffer_index >= BUFF_SIZE)
			break;
		buffer[buffer_index] = s[i];
		buffer_index++;
	}
	return (buffer_index);
}
