#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char alfa;

	for (alfa = 'a'; alfa <= 'z'; alfa++)
	{
		putchar(alfa);
	}

	for (alfa = 'A'; alfa <= 'Z'; alfa++)
	{
		putchar(alfa);
	}

	putchar('\n');
	return (0);
}
