#include"variadic_functions.h"

/**
 * print_strings - function that prints
 * strings, followed by a new line.
 * @n: int
 * @separator: string separator
 * @...: the integers to print
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	int *string;
	va_list p;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
		while (i--)
			printf("%s%s", (string = va_arg(p, char *)) ? str : "(nil)", i ?
			(separator ? separator : "") : "\n");

	va_end(p);
}
