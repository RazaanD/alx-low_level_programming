#include "main.h"

/**
 * _pow_recursion - function that returns the value of a
 * raised to the power of b
 * @a: Number
 * @b: Number of times to raised
 * Return: If y is lower than 0, the function should return -1
**/

int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	else
		return (a * _pow_recursion(a,  b - 1));
}
