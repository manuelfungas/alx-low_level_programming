/**
 * _islower - verifies if a ascii letter is lower_case
 * @c: The character to verify
 *
 * Return: On success 1.
 * Otherwise, 0 is returned.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
