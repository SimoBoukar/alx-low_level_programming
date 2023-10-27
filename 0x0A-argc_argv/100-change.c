#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: nmb of cmdline arg
 * @argv: pointer to array of cmdline arg
 * Return: 0-success, non-0-fail
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, coins = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
	if (money >= cents[i])
	{
		coins += money / cents[i];
		money = money % cents[i];
		if (money % cents[i] == 0)
		{
			break;
		}
	}
	}
	printf("%d\n", coins);
	}
	return (0);
}
