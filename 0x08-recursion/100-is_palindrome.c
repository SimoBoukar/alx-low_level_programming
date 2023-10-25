#include"main.h"

/**
 * last_index - returns the last index of the string
 * @s: pointer to string
 * Return: int
*/

int is_palindrome(char *s);
int check(char *s, int beggining, int ending, int modulo);
int last_index(char *s)
{
int i = 0;
if (*s > '\0')
i += last_index(s + 1) + 1;
return (i);
}

/**
 * is_palindrome - returns 1 if a string is a
 * palindrome and 0 if not
 * @s: pointer to string
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int ending = last_index(s);

	return (check(s, 0, ending - 1, ending % 2));
}

/**
 * check - checker for the palindrome
 * @s: pointer to string
 * @beggining: int
 * @ending: int
 * @modulo: int
 * Return: 0 or 1
*/

int check(char *s, int beggining, int ending, int modulo)
{
	if ((beggining == ending && modulo != 0) ||
		(beggining == ending + 1 && modulo == 0))
		return (1);
	else if (s[beggining] != s[ending])
		return (0);
	else
		return (check(s, beggining + 1, ending - 1, modulo));
}
