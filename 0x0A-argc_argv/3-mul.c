#include<stdio.h>
#include<stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: num of cmdline of arg
 * @argv: pointer to array of cmdline of arg
 * Return: 0-success, non-0-fail
*/

int main(int argc, char *argv[])
{
	int a;

	if (argc == 3)
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", a);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
