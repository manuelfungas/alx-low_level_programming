/**
 * _strlen - string length
 *
 * @s: the String itself
 *
 * Return: len
 */
int _strlen(char *s)
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
