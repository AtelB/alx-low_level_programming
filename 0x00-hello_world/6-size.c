#include <stdio.h>
/**
 * main - print out the sizes of data types in c
 * code by bright
 * Description: prints the size of various types on the computer it is compiled
 * and run on
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
