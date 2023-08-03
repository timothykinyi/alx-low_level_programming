#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int o, coun = 0;
	unsigned long int curren;
	unsigned long int exclusive = n ^ m;

	for (o = 63; o >= 0; o--)
	{
		curren = exclusive >> o;
		if (curren & 1)
			coun++;
	}

	return (coun);
}
