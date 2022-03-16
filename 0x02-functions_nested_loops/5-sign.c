#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number of interest
 *
 * Return: 1 (Positive), 0 (Zero), -1(Negative)
 */
int print_sign(int n)
{
	int see = 0;

	if (n > 0)
	{
		_putchar('+');
		see = 1;
	}

	if (n < 0)
	{
		_putchar('-');
		see = -1;
	}

	if (n == 0)
	{
		_putchar('0');
		see = 0;
	}
	return (see);
}
