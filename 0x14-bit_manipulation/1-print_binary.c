#include"main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the num to print
 *
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8, printed = 0;

	while (bits)
	{
		if (n & 1l << --bits)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
