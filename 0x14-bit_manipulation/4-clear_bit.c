#include <stdio.h>
/**
 * clear_bit - set bit to 1 at given index
 *
 * @n: the number
 * @index: the position to change
 * Return: 1 0n success amd -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
