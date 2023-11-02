#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 * @n: num of bytes
 * Return: pointer to space in memory
 * containing concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, s1_length, s2_length;

	/*check if the strings passed are NULL*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*compute the length of the strings*/

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

	/*memory reservation for strings 1 & 2*/
	ptr = malloc(s1_length + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	/*copy 1st string into ptr*/
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	/*copy 2nd string into ptr*/
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
