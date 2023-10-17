#include"main.h"

/**
 * _strlen - Calculate the length of a string
 *
 * This function takes a pointer to a character
 * (string) as a parameter and counts
 * the number of characters in the string until
 * it reaches a null terminator ('\0').
 *
 * @s: Pointer to the input string
 * Return: The length of the string
 */


int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\n'; s++)
		counter++;

	return (counter);
}
