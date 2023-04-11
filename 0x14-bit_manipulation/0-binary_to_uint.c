#include "main.h"

/**
 * binary_to_unit - function that converts a binary number
 * to an usigned int
 * @b: binary
 * unsigned int
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b);
{
	int i;
	unsigned int ui;

	ui = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		ui <<= 1;
		if (b[i] == '1')
			ui += 1;
	}
	return (ui);
}
