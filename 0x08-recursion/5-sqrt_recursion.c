#include "main.h"
/**
 * _sqrt_recursion -  Returns the natural square root of a number.
 * @i: int type
 * Return: char type
 **/
int _sqrt_recursion(int i)
{
return (_sqrt_rec(i, 1));
}
/**
 * _sqrt_rec - Second entry.
 * @i: int type
 * @r: int type
 * Return: r in square value
 **/
int _sqrt_rec(int i, int r)
{
if (i <= 0)
return (-1);

if (r * r > i)

return (-1);

if (i == r * r)
return (r);

return (_sqrt_rec(i, r + 1));
}
