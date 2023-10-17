#include"main.h"

/**
 * print_rev - Print a string in reverse order
 * followed by a newline character
 *
 * This function takes a pointer to a character
 *  (string) as a parameter and prints
 * the characters of the string in reverse order,
 * starting from the last character
 * and moving towards the first character.
 * After printing the reversed string, it
 * adds a newline character ('\n') to move to the next line.
 *
 * @s: Pointer to the input string to be printed in reverse
 */


void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
