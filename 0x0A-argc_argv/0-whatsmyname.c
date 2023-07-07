#include <stdio.h>

/**
 * main - prints name of the executable file
 * @argc: counter
 * @argv: array of strings
 * Return: 0 on success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
