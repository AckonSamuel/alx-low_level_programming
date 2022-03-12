#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes here */

/**
 * main - This prints the alphabets in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	int lwch;

	for (lwch = 0; lwch <= 9; lwch++)
	{
	putchar(lwch + '0');
	if (lwch != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
