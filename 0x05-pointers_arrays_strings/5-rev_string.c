#include <unistd.h>

/**
 * rev_string - string length
 *
 * @s: the String itself
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int i;
	int j;

	len = 0;

	while (s[len] != '\0')
	{
		len = len + 1;
	}

	j = 0;
	i = len - 1;

	while (j < i)
	{
		char tmp;

		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j = j + 1;
		i = i - 1;
	}
}
