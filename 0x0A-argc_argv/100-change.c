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
	int i, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = atoi(argv[1]); i > 0; i--)
	{
		count++;
		if ((i - 25) >= 0)
		{
			i = i - 25;
			continue;
		}
		if ((i - 10) >= 0)
		{
			i = i - 10;
			continue;
		}
		if ((i - 5) >= 0)
		{
			i = i - 5;
			continue;
		}
		if ((i - 2) >= 0)
		{
			i = i - 2;
			continue;
		}
	}

	printf("%d\n", count);

	return (0);
}
