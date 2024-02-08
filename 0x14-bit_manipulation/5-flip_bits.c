#include <stdio.h>
#include "main.h"
/**
 * count_set_bits - helper function to count fliped bits
 *
 * @b: numeber to count
 * Return: count
 */
unsigned int count_set_bits(unsigned long int b)
{
	unsigned int count;

	count = 0;
	while (b > 0)
	{
		count++;
		b &= (b - 1);
	}
	return (count);
}

/**
 * flip_bits - bits to be fliped
 *
 * @n: first argument
 * @m: secound argument
 * Return: number of bits to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_set_bits(n ^ m));
}
