/**
 *_memset - reserves memory for b
 *@s: pointer to the memory area s
 *@b: value to set
 *@n: bytes of the memory
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;

	}

	return (s);
}
