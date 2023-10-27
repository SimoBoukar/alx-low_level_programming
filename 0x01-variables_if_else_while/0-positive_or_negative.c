#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - Enry point
 *
 * Description: false or true validation
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i == 0)
		printf("%i is zero\n", i);
	else
		printf("%i is negative\n", i);
	return (0);
}
