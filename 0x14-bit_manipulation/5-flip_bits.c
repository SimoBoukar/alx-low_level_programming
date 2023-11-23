#include"main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: 1st num
 * @m: 2nd num
 *
 * Return: num of bits to flip to convert num
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_val = n ^ m;
	unsigned int counter = 0;

	while (xor_val)
	{
		if (xor_val & 1ul)
			counter++;
		xor_val = xor_val >> 1;
	}
	return (counter);
}
