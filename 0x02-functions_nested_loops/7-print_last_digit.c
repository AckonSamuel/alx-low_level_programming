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
	int s;

	if ( c < 0)
		r = c * -1;
	else
		r = c;
	s = r % 10;
	_putchar(s);
	return (0);
}
