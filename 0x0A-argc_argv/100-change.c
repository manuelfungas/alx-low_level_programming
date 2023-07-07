#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the change of coins
 * @argc: counter
 * @argv: array of strings
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	long unsigned int i;
	int amount, count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
	}

	for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
	{
		if (amount >= coins[i])
		{
			count += amount / coins[i];
			amount %= coins[i];
		}
	}

	printf("%d\n", count);

	return (0);
}
