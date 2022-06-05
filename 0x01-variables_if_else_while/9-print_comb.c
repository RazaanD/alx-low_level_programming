#include <stdio.h>

/**
 * main - prints all possible combinations
 * of single-digit numbers.
 * Return: 0
 */

int main(void)
{
// 	int i = '0';

// 	while (i <= '9')
// 	{
// 		putchar(i);
// 		if (i != '9')
// 		{
// 			putchar(',');
// 			putchar(' ');
// 		}
// 		i++;
// 	}
	
	char word[28]="0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
	int i = 0;

	while (i < 28)
	{
		putchar(word[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
