#include "main.h"
/**
 *print_string - prints a string
 *@s: the string to print
 *
 *Return: the length of the string
 */
int print_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
