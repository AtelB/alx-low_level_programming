#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: prints the size of various types on the computer it is compiled
 * and run on
 *
 * Return: Always 0(success)
 */

int main(void)
{
	printf("Size of a char: 1 byte(s)\n", (int) sizeof(char));
	printf("Size of an int: 4 byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: 8 byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: 8 byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: 4 byte(s)\n", (int)sizeof(float));

	return (0);
}
