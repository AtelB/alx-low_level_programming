#include "main.h"

/**
 * print_binary - prints the binary notation of a number
 * @n: integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;
	int wave, i;

	wave = 0;
	for (i = 63; i >= 0; i--)
	{
		x = (n >> i) & 1;
		if (x == 1)
			wave = 1;
		if (wave == 1)
			_putchar(((n >> i) & 1) + '0');
	}
	if (n == 0)
		_putchar('0');
}
