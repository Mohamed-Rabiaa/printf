#include "main.h"
/**
 *print_binary - Converts a positive number to binary and prints it
 *@num: the number to print in binary
 *@digitcount: the number of digits in the binary
 *
 *Return: the number of digits in the binary
 */
int print_binary(unsigned int num, int digitcount)
{
	unsigned int n;

	n = num;
	if (n / 2 != 0)
		digitcount = print_binary(n / 2, digitcount);
	_putchar(n % 2 + '0');
	digitcount++;
	return (digitcount);
}
