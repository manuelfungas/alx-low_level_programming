#include <unistd.h>

/**
 * print_rev - string length
 *
 * @s: the String itself
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = 0;

	while (*s[len] != '\0')
	{
		len = len + 1;
	}

	i = len - 1;

	while (i >= 0)
	{
		write(1, &s[i], 1);
		i = i - 1;
	}

	write(1, "\n", 1);
}
