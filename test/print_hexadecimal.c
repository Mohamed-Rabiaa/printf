#include "main.h"
/**
 *print_hexadecimal - converts a number to hexadecimal and prints it
 *@num: the number to convert and print
 *@digitscount: the number of digits in the hexadecimal
 *@c: the case
 *
 *Return: the number of digits in the hexadecimal
 */
int print_hexadecimal(unsigned int num, int digitscount, char c)
{
	unsigned int n, r;

	n = num;
	if (n / 16 != 0)
		digitscount = print_hexadecimal(n / 16, digitscount, c);
	r = n % 16;
	if (r < 10)
		_putchar(r + '0');
	else
	{
		if (r == 10 && c == 'x')
			_putchar('a');
		else if (r == 10 && c == 'X')
			_putchar('A');
		if (r == 11 && c == 'x')
			_putchar('b');
		else if (r == 11 && c == 'B')
			_putchar('B');
		if (r == 12 && c == 'x')
			_putchar('c');
		else if (r == 12 && c == 'X')
			_putchar('C');
		if (r == 13 && c == 'x')
			_putchar('d');
		else if (r == 13 && c == 'X')
			_putchar('D');
		if (r == 14 && c == 'x')
			_putchar('e');
		else if (r == 14 && c == 'X')
			_putchar('E');
		if (r == 15 && c == 'x')
			_putchar('f');
		if (r == 15 && c == 'X')
			_putchar('F');
	}
		digitscount++;
		return (digitscount);
}
