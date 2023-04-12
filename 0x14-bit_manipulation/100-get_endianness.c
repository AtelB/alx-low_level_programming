#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int ui;
	char *p;

	ui = 1;
	p = (char *)&ui;

	return (*p);
}
