#include <unistd.h>
/**
 * _putchar - writes the character to c to stdout
 * @c: the character to print
 *
 * Return: 1 on success and -1 on error;
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
