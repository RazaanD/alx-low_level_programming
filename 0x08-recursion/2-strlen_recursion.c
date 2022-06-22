#include "main.h"
/**
 * _strlen_recursion - Return the length of a string
 * @A: char type
 * Return: char type
 **/
int _strlen_recursion(char *A)
{
	if (*A)
	{
		return (1 + _strlen_recursion(++A));
	}
	else
		return (0);
}
