#include "main.h"

/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c, l;

	for (l = 0; l <= 9; l++)
	{
		for (c = 'a'; c <= 9; l++)
		{
			putchar(c);
		}
		putchar("\n");
	}
}

