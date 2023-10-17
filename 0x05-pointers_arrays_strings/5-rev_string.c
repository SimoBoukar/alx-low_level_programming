#include"main.h"

/**
 * rev_string - Reverse a string in-place
 *
 * This function takes a pointer to a character
 * (string) as a parameter and reverses
 * the order of characters in the string in-place.
 * It does so by swapping the characters
 * from the beginning and end of the string towards the middle.
 *
 * @s: Pointer to the string to be reversed
 */

void rev_string(char *s)
{
	int i;
	char count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
	char j;
		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}

}
