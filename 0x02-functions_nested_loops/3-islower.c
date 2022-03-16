#include "main.h"
/**
 * _islower - to check for lowercase alphabets
 *
 * Return: 1 (Succes) or 0 (Fail)
 */

int _islower(int c)
{
	char first;
	int sen = 0;

	for (first = 'a'; first <= 'z'; first++)
	{
		if (c == first)
			sen++;
		else
			sen = sen;
	}
	return (sen);
}
