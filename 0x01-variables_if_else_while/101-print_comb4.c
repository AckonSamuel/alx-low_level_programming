#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes here */

/**
 * main - This prints possible combinations of three digits.
 *
 * Return: 0
 */
int main(void)
{
	int lwch;
	int j;
	int i;

	for (lwch = 0; lwch < 9; lwch++)
	{
	for (j = lwch + 1; j <= 9; j++)
	{
	for(i = j + 1; i <= 9; i++)
	{
	putchar(lwch + '0');
	putchar(j + '0');
	if (lwch != 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
