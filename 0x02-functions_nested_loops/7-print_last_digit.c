#include "main.h"

/**
 * print_last_digit - prints the last digit of a given n
 * @n: The control variable
 *
 * Return: On success result.
 */

int print_last_digit(int n)
{
	int result;

	if (n < 0)
	{
		result = (-n) % 10;
	}
	else
	{
		result = n % 10;
	}

	_putchar('0' + result);
	return (result);
}
