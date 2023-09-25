#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description - prints alphabet in lowercase 10 times
 * Return: (void)
 */

void print_alphabet_x10(void)
{
	int i, j;

	char a[26] = "abcdefghijklmnopqrstuvwxyz";

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 26)
		{
			_putchar(a[j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
