#include"variadic_functions.h"

/**
 * print_numbers - function that prints
 * numbers, followed by a new line.
 * @n: int
 * @separator: string separator
 * @...: the integers to print
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list p;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
		while (i--)
			printf("%d%s", va_arg(p, int).i ?
			(separator ? separator : "") : "\n");

	va_end(p);
}
