/**
 * _helper_sqrt - helps with the cases for the square root
 *
 * @i: helper 1
 * @j: helper 2
 * Return: helper
 */
int _helper_sqrt(int i, int j)
{
	if (i * i > j)
	{
		return (-1);
	}

	if (i * i == j)
	{
		return (i);
	}

	return (_helper_sqrt(i + 1, j));
}

/**
 *_sqrt_recursion - square root
 * @n: sqrt to be found
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return (_helper_sqrt(1, n));
}
