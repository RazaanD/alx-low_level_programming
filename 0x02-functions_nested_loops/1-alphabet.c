#include <stdio.h>
#include "main.h"
/**
 * print_alphabet
 *
 * Description: Prints the alphabet followed by a new line.
 * Return: 0
 */

int main(void)
{

	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
	putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
}
