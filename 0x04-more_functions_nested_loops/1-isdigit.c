#include "main.h"

/**
 * _isupper - Check for a digit 0 through 9
 * @c: The character to check
 *
 * Return 1 if c is a digit
 * Otherwise return 0
 */

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
