#include"main.h"

/**
 * swap_int - Swap the values of two integers using pointers
 *
 * This function takes two pointers to
 * integers as parameters and swaps the values
 * they point to. After calling this function,
 * the values of 'a' and 'b' will be
 * exchanged.
 *
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */

void swap_int(int *a, int *b)
{
		int tmp;

		tmp = *a;
		*a = *b;
		*b = tmp;
}
