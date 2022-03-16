#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabets followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int first;

	for (let counter = 0; counter <= 9; counter++)
	{
		first = 'a';
		while (first <= 'z')
		{
			_putchar(first);
			first++;
		}
		_putchar('\n');
	}
}
