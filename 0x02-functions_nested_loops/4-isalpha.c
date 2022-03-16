#include "main.h"

/** 
 * _isalpha - checks if character is an alphabet
 * @c: character to be checked
 *
 * Return: 1 (Success) or 0 (Fail)
 */
int _isalpha(int c)
{
	int first;
	int see = 0;

	for (first = 'a'; first <= 'z'; first++)
	{
		if (c == first)
			see++;
		else
			see = see;
	}
	
	for (first = 'A'; first <= 'Z'; first++)
	{
		if (c == first)
			see++;
		else
			see = see;
	}
	return see;
}
