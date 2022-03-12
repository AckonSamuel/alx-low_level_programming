#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes here */

/**
 * main - This prints the alphabets in lowercase and uppercase.
 *
 * Return: 0
 */
int main(void) 
{
	char lwch;


	for (lwch =  'a'; lwch <= 'z'; lwch++)
		putchar(lwch);
	for (lwch = 'A'; lwch <= 'Z'; lwch++)
		putchar(lwch);
	putchar('\n');
	return (0);
}
