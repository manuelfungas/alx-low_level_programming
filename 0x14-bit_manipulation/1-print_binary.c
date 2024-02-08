#include <stdio.h>
#include "main.h"

/**
 * print_binary - converts decimal to binay
 *
 * @n: argument to convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, significant_bit;

	significant_bit = 0;

	for (i = 31; i >= 0; i--)
	{
		int k = (n >> i) & 1;

		if (k || significant_bit)
		{
			_putchar(k ? '1' : '0');
			significant_bit = 1;
		}
	}

	if (!significant_bit)
		_putchar('0');
}
