#include <stdio.h>

/**
 * main - prints number of arguments without the name
 * @argc: counter
 * @argv: array of strings
 * Return: 0 on success
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
