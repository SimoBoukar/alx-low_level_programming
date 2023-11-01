#include"main.h"
#include<stddef.h>
#include <stdlib.h>

/**
 * _strlen - calculate the length of a string
 * @s: string
 * Return: int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0' ; size++)
	;
	return (size);
}

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int
 * @av: arguments
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, counta = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, counta++)
		counta += _strlen(av[i]);

	s = malloc(sizeof(char) * counta + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];

		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
