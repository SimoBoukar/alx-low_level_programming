#include"main.h"

/**
 * _puts - Print a string followed by a newline character
 *
 * This function takes a pointer to a character
 *  (string) as a parameter and prints
 * each character in the string until it reaches
 * the null terminator ('\0'). After
 * printing the entire string, it also prints a
 * newline character ('\n') to move
 * to the next line.
 *
 * @str: Pointer to the input string to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
