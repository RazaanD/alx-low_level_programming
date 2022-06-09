#include "main.h"

/**
 * _isdigit - Check for a digit 0 through 9
 * @c: The character to check
 *
 * Return: if is upper return 1.
 * On false 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
