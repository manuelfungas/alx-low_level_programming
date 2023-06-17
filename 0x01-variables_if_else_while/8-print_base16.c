#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char alfa;

	for (alfa = '0'; alfa <= '9'; alfa++)
	{
		putchar(alfa);
	}

	for (alfa = 'a'; alfa <= 'f'; alfa++)
	{
		putchar(alfa);
	}

	putchar('\n');
	return (0);
}
