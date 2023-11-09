#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"

/**
 * op_add - add two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: the sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: the sub
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplify two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: the mul
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: the div
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: the mod
*/

int op_mod(int a, int b)
{
	return (a % b);
}
