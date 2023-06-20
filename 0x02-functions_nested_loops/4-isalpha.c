/**
 * _isalpha - verifies if a ascii caracter is a letter
 * @c: The character to verify
 *
 * Return: On success 1.
 * Otherwise, 0 is returned.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
