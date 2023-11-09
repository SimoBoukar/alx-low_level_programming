#include"variadic_functions.h"

/**
 * format_char - formats character
 * @separator: the string separator
 * @p: arg pointer
*/

void format_char(char *separator, va_list p)
{
	printf("%s%c", separator, va_arg(p, int));
}

/**
 * format_int - formats character
 * @separator: the string separator
 * @p: arg pointer
*/

void format_int(char *separator, va_list p)
{
	printf("%s%d", separator, va_arg(p, int));
}

/**
 * format_float - formats character
 * @separator: the string separator
 * @p: arg pointer
*/

void format_float(char *separator, va_list p)
{
	printf("%s%f", separator, va_arg(p, double));
}

/**
 * format_string - formats character
 * @separator: the string separator
 * @p: arg pointer
*/

void format_string(char *separator, va_list p)
{
	char *string = va_arg(p, char *);

	switch ((int)(!string))
	case 1:
		string = "(nil)";

	printf("%s%s", separator, string);
}

/**
 * print_all - print anything
 * @format: the format string
 * @...: arg numb
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list p;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(p, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, p);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(p);
}
