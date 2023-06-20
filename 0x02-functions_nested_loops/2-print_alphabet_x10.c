#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower-case
 * @alfa - is the control variable
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
