#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int result;

	count = 0;
	result = n ^ m;
	while (result)
	{
		count += result & 1;
		result = result >> 1;
	}
	return (count);
}
