#include"main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int
 * @y: int
 * Return: -1 if y lower than 0, x if y equal 1, 1 if y equal 0, else print x aised to the power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
