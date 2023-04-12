#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: integer to check bits in
 * @index: to which to check bit
 *
 * Return: value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, search;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	search = n & divisor;
	if (search == divisor)
		return (1);
	return (0);
}
