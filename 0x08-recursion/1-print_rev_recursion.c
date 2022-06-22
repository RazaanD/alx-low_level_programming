#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @A: String
 * Return: the string in reverse
**/
void _print_rev_recursion(char *A)
{
if (*A)
{
_print_rev_recursion(A + 1);
_putchar(*A);
}
}
