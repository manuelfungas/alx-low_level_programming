#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower-case ten times
 * @alfa - is the control variable
 * @i - counter
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	char alfa;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alfa = 'a'; alfa <= 'z'; alfa++)
		{
			_putchar(alfa);
		}
		_putchar('\n');
	}
}
