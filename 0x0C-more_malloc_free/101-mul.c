#include"main.h"
#include<stdlib.h>

/**
 * _puts - pointer to a string, followed by new line
 * @ptrs: pointer to the string to print
 * Return: void
*/

void _puts(char *ptrs)
{
	int i = 0;

	while (ptrs[i])
	{
		_putchar(ptrs[i]);
		i++;
	}
}

/**
 * _atoi - convert a string to integer
 * @s: char type string
 * Return: integer converted
*/

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstnumber, i;

	for (firstnumber = 0; s[firstnumber] >= 48 &&
		s[firstnumber] <= 57; firstnumber++)
	{
		if (s[firstnumber] == '-')
		{
			sign *= -1;
		}
	}
	for (i = firstnumber; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}
	return (sign * resp);
}

/**
 * print_int - print an int
 * @a: int
 * Return: 0
*/

void print_int(unsigned long int a)
{
	unsigned long int divisor = 1, i, resp;

	for (i = 0; a / divisor > 9; i++, divisor *= 10)
		;
	for (; divisor >= 1; a %= divisor, divisor /= 10)
	{
		resp = a / divisor;
		_putchar('0' + resp);
	}
}

/**
 * main - print result of mult, followed by new line
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
