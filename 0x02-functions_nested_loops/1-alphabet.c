#include "main.h"

/**
 * print_alphabet - print alphabets in lowercase
 *
 * Return: none
 */

void print_alphabet(void)
{
	int first = 'a';

	while (first <= 'z')
	{
		_putchar(first);
		first++;
	}
	_putchar('\n');
}
