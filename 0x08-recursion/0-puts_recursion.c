#include "main.h"
/**
 * _puts_recursion - Prints a string with recursion.
 * Desc: _memset
 * @c: char type
 * char type returned
 **/

void _puts_recursion(char *c)
{
if (*c == '\0')
{
_putchar('\n');
return;
}
else
_putchar(*c);
c++;
_puts_recursion(c);
}
