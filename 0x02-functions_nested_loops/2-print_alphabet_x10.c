#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0; j;
	j = 0;
	while(j<10)
{
		while (i < 26)
		{
		printf(alphabet[i]);
			j++;
		}
		printf('\n');
		i++;
	}

    return (0);
}
