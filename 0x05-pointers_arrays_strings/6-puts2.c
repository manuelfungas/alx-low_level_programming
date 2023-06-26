#include <unistd.h>

/**
 * puts2 - implementation of puts
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int n;

	n = 0;

	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n = n + 2;
	}

	write(1, "\n", 1);
}
