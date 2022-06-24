#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @S: Number
 * Return: If n is lower than 0, the function should return -1
 * indicates an error
**/

int factorial(int S)
{
	if (S < 0)
		return (-1);
	if (S == 0)
		return (1);
	else
		return (S * factorial(S - 1));
}
