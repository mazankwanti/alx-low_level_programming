#include <stdio.h>
/**
 * main - entry point
 *
 * codes for printing all posible combination of two d/t digits.
 * in assending order and separated by a comma followed by a space.
 *
 * Return: 0 success
 */
int main(void)
{
	int digit1, digit2;
	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0'0);

			if (digit1 == 8 && digit2 == 9)
		        continue;

			outchar(' , ');
			putchar('  ');
		}
	}
	putchar('\n);
	return (0);
}
