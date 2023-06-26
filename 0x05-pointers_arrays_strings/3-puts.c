#include <unistd.h>

/**
 * _puts - implementation of puts
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int n;

	n = 0;

	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n = n + 1;
	}

	return (0);
}
