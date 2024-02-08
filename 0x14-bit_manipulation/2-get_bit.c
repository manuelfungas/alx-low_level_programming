#include <stdio.h>
/**
 * get_bit - change bit at given index
 *
 * @n: number to change
 * @index: where to change at
 *
 * Return: bit value on success and -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	bit_value = (n & mask) ? 1 : 0;

	return (bit_value);
}
