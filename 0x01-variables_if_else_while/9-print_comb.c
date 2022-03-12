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
	char star = ",";
	char spa = " ";
	int z = (int)(star);
	int y = (int)(spa);

	for (lwch = 0; lwch < 9; lwch++)
	{
	putchar(lwch + '0');
	putchar(z);
	if (lwch != 9)
	putchar(y);
	}
	putchar('\n');
	return (0);
}
