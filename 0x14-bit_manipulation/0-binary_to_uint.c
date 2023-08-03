#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int o;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (o = 0; b[o]; i++)
	{
		if (b[o] < '0' || b[o] > '1')
			return (0);
		dec = 2 * dec + (b[o] - '0');
	}

	return (dec);
}
