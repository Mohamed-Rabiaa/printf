#include "main.h"

/**
 *print_unsigned_int - prints unsigned integer
 *@num: the number to print
 *@digitcount: the number of digits in num
 *
 *Return: the number of digits in num
 */
int print_unsigned_int(unsigned int num, int digitcount)
{
	unsigned int n;

	n = num;

	if (n / 10 != 0)
		digitcount = print_unsigned_int(n / 10, 0);

	_putchar((n % 10) + '0');
	digitcount++;

	return (digitcount);
}
