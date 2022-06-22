#include "main.h"
/**
 *Prints a string with recursion.
 * @c: char type
 * char type is returned
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
_puts_recursion(s);
}
