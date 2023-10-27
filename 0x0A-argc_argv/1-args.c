#include<stdio.h>

/**
 * main - prints the number of arguments passed into i
 * @argc: num of cmdline of args
 * @argv: pointer to array of cmdline args
 * Return: 0-success, non-0-fail.
*/

int main(int argc, char *argv[] __attribute__((unsused)))
{
	printf("%d\n", argc - 1);
		return (0);
}
