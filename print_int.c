/**
 *print_int - prints an integer and returns its number of digits
 *@num: the integer to print
 *@digitcount: the number of digits in num
 *
 *Return: the number of digits in num
 */
int print_int(int num, int digitcount)
{
	unsigned int n;

	n = num;

	if (num < 0)
	{
		_putchar('-');
		n = -num;
		digitcount++;
	}

	if (n / 10 != 0)
	digitcount = print_int(n / 10, digitcount);
	_putchar((n % 10) + '0');
	digitcount++;

	return (digitcount);
}
