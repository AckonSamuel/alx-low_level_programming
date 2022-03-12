#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes here */

/**
 * main - This prints possible combinations of two two digits.
 *
 * Return: 0
 */
int main(void)
{
	int lwch;
	int j;
	int i;
	int s;

	for (lwch = 0; lwch <= 9; lwch++)
	{
	for (j = 0; j <= 9; j++)
	{
	for (i = 0; i <= 9; i++)
	{
	for (s = j + 1; s <= 9; s++)
	{
	putchar(lwch + '0');
	putchar(j + '0');
	putchar(' ');
	putchar(i + '0');
	putchar(s + '0');
	if (j != 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
