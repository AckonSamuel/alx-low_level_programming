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
	char lwch;


	for (lwch = 'z'; lwch >= 'a'; lwch--)
		putchar(lwch);
	putchar('\n');
	return (0);
}
