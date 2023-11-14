#include "main.h"

/**
 *print_octal - converts a number to octal and prints it
 *@num: the number to convert
 *@digitscount: the number of digits in the octal number
 *
 *Return: the number of digits in the octal number
 */
int print_octal(unsigned int num, int digitscount)
{
	unsigned int n;

	n = num;

	if (n / 8 != 0)
		digitscount = print_octal(n / 8, digitscount);

	_putchar((n % 8) + '0');
	digitscount++;

	return (digitscount);
}
