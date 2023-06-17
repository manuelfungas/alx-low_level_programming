#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char alfa;

	for (alfa = 'z'; alfa >= 'a'; alfa--)
	{
		putchar(alfa);
	}

	putchar('\n');
	return (0);
}
