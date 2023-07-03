/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Char to be found
 * Return: pointer to the first character c in the string s or NULL
 **/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (*s == c)
	{
		return (s);

	}

	return (0);
}
