#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 *
 * @n: first var
 *
 * Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
