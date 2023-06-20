#include "main.h"

/**
 * print_sign - writes the character c to stdout
 * @n: The control variable
 *
 * Return: On success 1.
 * when negative, -1 is returned, and 0 is return if n == 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
