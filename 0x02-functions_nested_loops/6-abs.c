#include "main.h"

/**
 * _abs - returns the absolute value
 * @c: input parameter
 *
 * Return: Always 0.
 */
int _abs(int c)
{
	int see;

	if (c >= 0)
		see = c;
	if (c < 0)
		see = -1 * c;
	return (see);
}
