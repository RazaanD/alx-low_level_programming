#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int repertition = 1;

	while(repertition <= 10){
		while (i < 26)
		{
			putchar(alphabet[i]);
			i++;
		}
		putchar('\n');
		repertition++;
		i=0;
	}

    return (0);
}
