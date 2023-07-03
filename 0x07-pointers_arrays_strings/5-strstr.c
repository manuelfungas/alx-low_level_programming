/**
 * _strstr - first occurrence of the needle in the string haystack
 * @haystack: main string
 * @needle: searched in haystack
 * Return: return 0
 **/

char  *_strstr(char *haystack, char *needle)
{
	char *ptr;
	char *p;

	while (*haystack != '\0')
	{
		ptr = haystack;
		p = needle;

		while (*p != '\0' && *ptr == *p)
		{
			ptr++;
			p++;
		}

		if (*p == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	return (0);
}
