/**
 * swap_int - change position of a and b
 * @a: value of 1
 * @b: value 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
