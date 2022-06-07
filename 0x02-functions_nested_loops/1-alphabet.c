#include "main.h"
/**
 * print_alphabet - Entry point function
 *
 * Description: Prints the alphabet using a library followed by a new line.
 * Return: 0
 */

int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		_putchar(alphabet[i]);
		i++;
	}
	_putchar('\n');
}
