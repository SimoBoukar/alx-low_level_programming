#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - check the code of user
 * @argc: num of args
 * @argv: arg vector
 * Return: 0
*/

int main(int argc, char **argv)
{
	int (*operating_func)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

		operating_func = get_op_func(argv[2]);
		if (!operating_func)
		printf("Error\n"), exit(99);

		if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", operating_func(a, b));
	return (0);
}
