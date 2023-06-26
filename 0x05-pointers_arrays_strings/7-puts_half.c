#include <unistd.h>

/**
 * puts_half - implementation of puts
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n;
	int i;
	int j;

	n = 0;

	while (str[n] != '\0')
	{
		n = n + 1;
	}

	if (n % 2 == 0)
	{
		i = n / 2;
	}
	else
	{
		i = (n - 1) / 2;
	}

	j = i;

	while (j < n)
	{
		write(1, &str[n], 1);
		j = j + 1;
	}

	write(1, "\n", 1);
}
