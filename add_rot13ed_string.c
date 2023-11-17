#include "main.h"
/**
 *add_rot13ed_string - converts a string to rot13 and adds it to a buffer
 *@str: the string to convert and add to the buffer
 *@buffer: the buffer:
 *@buffer_index: the index of teh buffer
 *
 *Return: buffer_index
 */
int add_rot13ed_string(char *str, char *buffer, int buffer_index)
{
	int i, j;

	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == 0)
		buffer_index = add_string("(null)", buffer, buffer_index);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (str[i] == input[j])
			{
				buffer[buffer_index] = output[j];
				break;
			}
			else
				buffer[buffer_index] = str[i];

		}
		buffer_index++;
	}
	return (buffer_index);
}
