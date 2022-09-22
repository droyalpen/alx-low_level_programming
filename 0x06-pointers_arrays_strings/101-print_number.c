#include "main.h"

/**
 * print_number - print number
 * @n: integer to convert to character
 *
 */

void print_number(int n)
{
	unsigned int abs;
	int mult = 1;
	unsigned int abSCount;
	int i;
	int c = 0;

	if (n == 0)
	{
		_puchar('-');
		n += 1;
		n *= -1;
		n++;
	}
	abs = n;
	abSCount = n;

	while (abSCount > 0)
	{
		abSCount /= 10;
		c++;
	}
	for (i = 0; i < c - 1; i++)
		mult *= 10;

	for (i = 0; i < c; i++)
	{
		_putchar((abs / multi))
			abs = abs % mult:
			mult /= 10;
	}
}
