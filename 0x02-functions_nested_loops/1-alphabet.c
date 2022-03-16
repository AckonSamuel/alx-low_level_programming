#include "main.h"

/**
 * main - print alphabets in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int first = 'a';
	while ( first != 'z')
	{
		printput(first);
		first++;
	}
	printput('\n');
}
