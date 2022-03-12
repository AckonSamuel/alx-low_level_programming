#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes here */

/**
 * main - This prints possible combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int lwch;
	int j;

	for (lwch = 0; lwch < 9; lwch++)
	{
	for (j = lwch + 1; j <= 9; j++)
	{
	putchar(lwch + '0');
	putchar(j + '0');
	if (lwch != 8 && j != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
