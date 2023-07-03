/**
 * _strspn - get length of substring
 * @s: main string
 * @accept: String to be compared to
 * Return: return count
 **/
unsigned int _strspn(char *s, char *accept)

{
	unsigned int count = 0;
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; ++i)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
		}

		if (*s != accept[i])
		{
			break;
		}

		s++;
	}

	return (count);
}
