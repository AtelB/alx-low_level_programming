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
	unsigned int k;
	int length, l;

	k = 0;
	if (!b)
		return (0);
	for (l = 0; b[l] != '\0'; l++)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
	}
	for (l = 0; b[l] != '\0'; l++)
	{
		k <<= 1;
		if (b[l] == '1')
			k += 1;
	}
	return (k);
}
