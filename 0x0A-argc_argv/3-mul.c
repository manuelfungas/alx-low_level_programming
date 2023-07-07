#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of 2 values
 * @argc: counter
 * @argv: array of strings
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);

	return (0);
}
