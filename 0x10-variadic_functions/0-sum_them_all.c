#include"variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: int
 * @...: the numbers to sum
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int i = n, sum = 0;
	va_list p;

	if (n == 0)
		return (0);
	va_start(p, n);
	while (i--)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}
