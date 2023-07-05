
#include "main.h"

/**
 * _helper - checks to see if number is prime
 *
 * @a: helper 1
 * @b: helper 2
 * Return: helper
 */
int _helper(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}

	return (_helper(a + 1, b));
}

/**
 * is_prime_number - states if number is prime
 *
 * @n: to veify
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	return (_helper(2, n));
}
