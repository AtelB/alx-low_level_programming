#include "main.h"

/**
 * clear_bit - sets value of a bit to 0
 * at a given index
 * @n: pointer to integer
 * @index: starting from 0 of the bit
 * you want to set
 * Return:1 if success, -1 if error is encountered
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int uli;

	if (index >= (sizeof(*n) * 8))
		return (-1);

	uli = 1 << index;

	if (*n & uli)
		*n ^= uli;

	return (1);
}
