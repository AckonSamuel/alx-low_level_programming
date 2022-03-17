#include "main.h"
/*
 * print_last_digit - prints last digit
 * @c: input
 *
 * Return: 0.
 */

int print_last_digit(int c)
{
	int r;

	r = c % 10;
	_putchar(r + '0');
	return (0);
}
