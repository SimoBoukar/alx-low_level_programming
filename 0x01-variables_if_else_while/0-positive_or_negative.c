#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - Enry point
 *
 * Description: positive or negative
 *
 * return : 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive", n);
	else if (n == 0)
		printf("%i is positive", n);
	else
		printf("%i is negative", n);
	return (0);
}
