/**
 * _strlen - string length
 *
 * @s: the string argument
 * Return: len
 */
int _strlen(const char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len = len + 1;
		s = s + 1;
	}

	return (len);
}
/**
 * binary_to_uint - converts binary to decimal
 *
 * @b: the binary argument
 *
 * Return: integer on success
 */

unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int total, base;

	len = _strlen(b);
	total = 0;
	base = 1;

	if (!b)
	{
		return (0);
	}

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] & 1)
		{
			total = total + base;
		}
		base = base * 2;
	}

	return (total);
}
