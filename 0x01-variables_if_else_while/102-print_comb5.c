#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combination of two digits.
 *
 * Return: 0
 */

int main(void)
{
	int firstDigit = 0, seconDigit;

	while (firstDigit <= 99)
	{
		seconDigit = firstDigit;
		while (seconDigit <= 99)
		{
			if (seconDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putcahr((firstDigit % 10) + 48);
				putchar(' ');
				putchar((seconDigit / 10) + 48);
				putcahr((seconDigit % 10) + 48);

				if (firstDigit != 98 || seconDigit != 98)
				{
				putchar(',');
				putcahr(' ');
				}
			}
			seconDigit++;
		}
		firstDigit++;
	}
	putcahr('\n');

	return (0);
}
